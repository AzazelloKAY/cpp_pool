/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 21:02:31 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main( void )
{
	Bureaucrat *b;
	try
	{
		b = new Bureaucrat("Vasja", 150);
	}
	catch(std::exception& e)
	{
		std::cout << "While creation Burokrat we have an exception \"" << e.what() <<"\"\n";
	}

	try
	{
		Form z("plohaja forma", 0, 0);
	}
	catch(std::exception& e)
	{
		std::cout << "While creation forma we have an exception \"" << e.what() <<"\"\n";
	}

	Form *f;
	try
	{
		f = new Form("super forma", 50, 90);
	}
	catch(std::exception& e)
	{
		std::cout << "While creation forma we have an exception \"" << e.what() <<"\"\n";
	}
	Bureaucrat a("Onufriy", 1);

	b->signForm(*f);
	std::cout << *f << "\n";
	a.signForm(*f);
	std::cout << *f << "\n";

	delete (b);
	delete (f);

	return (0);
}