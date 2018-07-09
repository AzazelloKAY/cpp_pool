/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:04 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/18 13:15:55 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main()//int ac, char** av
{
	PhoneBook base;
	string command;

	while(!cin.eof())
	{
		cout << " > Type your command: ";
		getline(cin, command);
		if (command == "ADD" || command == "add")
			base.cmd_add();
		else if (command == "SEARCH" || command == "search")
			base.cmd_search();
		else if (command == "EXIT" || command == "exit")
			base.cmd_exit();
		PhoneBook::eof_check();
	}
	return (0);
}