/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 17:10:57 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat b("Vasja", 258);
		std::cout << "We hawe a " << b <<"\n";

		Bureaucrat b2("Petya", 15);
		std::cout << "We hawe a " << b <<"\n";
	}
	catch(std::exception& e)//Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "While creation Burokrat we have an exception \"" << e.what() <<"\"\n";
	}

	try
	{
		Bureaucrat b("Vasja", 0);
		std::cout << "We hawe a " << b <<"\n";

		Bureaucrat b2("Petya", 15);
		std::cout << "We hawe a " << b <<"\n";
	}
	catch(std::exception& e)//Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "While creation Burokrat we have an exception \"" << e.what() <<"\"\n";
	}

	try
	{
		Bureaucrat b3("Petya", 15);
		std::cout << "We hawe a " << b3 <<"\n";
	}
	catch(std::exception& e)//Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "While creation Burokrat we have an exception " << e.what() <<"\n";
	}
	return (0);
}