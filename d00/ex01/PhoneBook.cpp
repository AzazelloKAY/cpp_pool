/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:04 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/18 13:15:55 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	totalNum = 8;
	curNum = 0;
}

PhoneBook::~PhoneBook()
{

}

string	PhoneBook::get_field()
{
	string str;
	getline(cin, str);
	eof_check();
	return (str);
}

void	PhoneBook::cmd_add()
{
	if (curNum < totalNum)
	{
		cout << "firstName: ";
		rec[curNum].firstName = get_field();
		cout << "lastName: ";
		rec[curNum].lastName = get_field();
		cout << "nickname: ";
		rec[curNum].nickname = get_field();
		cout << "login: ";
		rec[curNum].login = get_field();
		cout << "postalAddress: ";
		rec[curNum].postalAddress = get_field();
		cout << "emailAddress: ";
		rec[curNum].emailAddress = get_field();
		cout << "phoneNumber: ";
		rec[curNum].phoneNumber = get_field();
		cout << "birthdayDate: ";
		rec[curNum].birthdayDate = get_field();
		cout << "favoriteMeal: ";
		rec[curNum].favoriteMeal = get_field();
		cout << "underwearColor: ";
		rec[curNum].underwearColor = get_field();
		cout << "darkestSecret: ";
		rec[curNum].darkestSecret = get_field();

		curNum++;
	}
}

void	PhoneBook::print_fild(string str)
{
	if (str.length() > 10)
	{
		cout << str.substr(0, 9) << ".";
	}
	else
	{
		int dif = 10 - (int)str.length();
		for (int i = 0; i < dif; i++)
		{
			cout << " ";
		}
		cout << str;
	}
}

void	PhoneBook::print_index()
{
	for (int i = 0; i < curNum; i++)
	{
		cout << "         " << i << "|";
		print_fild(rec[i].firstName);
		cout << "|";
		print_fild(rec[i].lastName);
		cout << "|";
		print_fild(rec[i].nickname);
		cout << "\n";
	}
}

void	PhoneBook::cmd_search()
{
	if (curNum > 0)
	{
		//print
		print_index();

		//waiting for index
		int index = 0;
		cout <<  " > Choose the index: ";
		cin >> index;

		if (cin.fail())
		{
			//if there was symbols instead of digit
			eof_check();
			cin.clear();
		}
		else if (0 <= index && index < curNum)
		{
			//print search result
			cout << "-First Name      : " <<rec[index].firstName << "\n";
			cout << "-Last Name       : " <<rec[index].lastName << "\n";
			cout << "-Nickname        : " <<rec[index].nickname << "\n";
			cout << "-Postal Address  : " <<rec[index].postalAddress << "\n";
			cout << "-Phone Number    : " <<rec[index].phoneNumber << "\n";
			cout << "-Email Address   : " <<rec[index].emailAddress << "\n";
			cout << "-Login           : " <<rec[index].login << "\n";
			cout << "-Birthday Date   : " <<rec[index].birthdayDate << "\n";
			cout << "-Favorite Meal   : " <<rec[index].favoriteMeal << "\n";
			cout << "-Underwear Color : " <<rec[index].underwearColor << "\n";
			cout << "-Darkest Secret  : " <<rec[index].darkestSecret << "\n";
		}
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::cmd_exit()
{
	exit(0);
}

void PhoneBook::eof_check()
{
	if (cin.eof())
	{
		cout << "\nCrappy input, seeya!\n";
		exit(0);
	}
}
