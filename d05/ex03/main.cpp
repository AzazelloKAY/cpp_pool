/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 16:18:30 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main( void )
{
	Intern inte;
	Bureaucrat b1("Musha", 80);
	Bureaucrat b2("Gruwa", 40);
	Bureaucrat bboss("THE BOSS", 1);

	Form *f1 = inte.makeForm("ShrubberyCreation", "myhouse.txt");
	Form *f2 = inte.makeForm("PresidentialPardon", "mumu");
	Form *f3 = inte.makeForm("RobotomyRequest", "bobo");


	if (f1 != NULL)
	{
		b1.signForm(*f1);
		b2.signForm(*f1);
		b1.executeForm(*f1);
		b2.executeForm(*f1);
	}

	if(f2 != NULL)
	{
		b1.signForm(*f2);
		b2.signForm(*f2);
		bboss.signForm(*f2);
		b1.executeForm(*f2);
		b2.executeForm(*f2);
		bboss.executeForm(*f2);
	}

	if(f3 != NULL)
	{
		b1.signForm(*f3);
		b2.signForm(*f3);
		b1.executeForm(*f3);
		b2.executeForm(*f3);
	}


	return (0);
}