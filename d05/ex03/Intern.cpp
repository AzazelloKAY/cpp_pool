/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:13:24 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 16:00:57 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"



//******************
Intern::UnknownFormException::UnknownFormException() {}
Intern::UnknownFormException::~UnknownFormException() throw() {}
Intern::UnknownFormException::UnknownFormException(UnknownFormException const & src)
{
	*this = src;
}
Intern::UnknownFormException& Intern::UnknownFormException::operator=(UnknownFormException const & src)
{
	(void)src;
	return (*this);
}
const char* Intern::UnknownFormException::what() const throw()
{
	return ("The form is unknown");
}

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const & src){
	*this = src;
}
Intern& Intern::operator=(Intern const &src){
	(void)src;
	return (*this);
}




Form* Intern::tryMakeForm(std::string frmName, std::string frmTarget)
{
	std::string formNames[3] = {"RobotomyRequest", "PresidentialPardon", "ShrubberyCreation"};
	Form* (Intern::*createFrm[3])(std::string const & trg) =
	{
		&Intern::createRo,
		&Intern::createPr,
		&Intern::createSh,

	};

	for(int i = 0; i < 3; i++)
		if (formNames[i] == frmName)
		{
			std::cout << "Intern creates " << frmName << " form\n";
			return ((this->*createFrm[i])(frmTarget));
		}

	throw(Intern::UnknownFormException());
}

Form* Intern::makeForm(std::string frmName, std::string frmTarget)
{
	try
	{
		return (tryMakeForm(frmName, frmTarget));
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	return (NULL);
}



Form* Intern::createSh(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::createPr(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::createRo(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}
