/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 17:29:13 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

int main( void )
{
	Intern idiotOne;

	Bureaucrat bob = Bureaucrat("Bobby Bobson", 70);
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
//	Bureaucrat *hermes = NULL;

	OfficeBlock ob;
	ob.setIntern(&idiotOne);
	ob.setSigner(&bob);
	ob.setExecutor(&hermes);

	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (Intern::UnknownFormException & e)
	{
		std::cout << "We received the message: '" << e.what() << "', it seems you try to broke our perfect world! >:/\n";
	}
	catch (std::exception & e)
	{
		std::cout << "Something is broken: " << e.what() << " =(\n";
	}


	try
	{
		ob.doBureaucracy("RobotomyRequest", "Pigley");
	}
	catch (Intern::UnknownFormException & e)
	{
		std::cout << "We received the message: '" << e.what() << "', it seems you try to broke our perfect world! >:/\n";
	}
	catch (std::exception & e)
	{
		std::cout << "Something is broken: " << e.what() << " =(\n";
	}



	return (0);
}