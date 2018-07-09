/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 23:39:12 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>

int main( void )
{
	Bureaucrat b1("Musha", 80);
	Bureaucrat b2("Gruwa", 40);

	ShrubberyCreationForm f1("house.txt");
	PresidentialPardonForm f2("mumu");
	RobotomyRequestForm f3("bobo");

	b1.signForm(f1);
	b1.signForm(f2);
	b1.signForm(f3);

	b2.signForm(f1);
	b2.signForm(f2);
	b2.signForm(f3);

std::cout << "\nTry to do:\n";

	b1.executeForm(f1);
	b1.executeForm(f2);
	b1.executeForm(f3);

	b2.executeForm(f1);
	b2.executeForm(f2);
	b2.executeForm(f3);

	return (0);
}