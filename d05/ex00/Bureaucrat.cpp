/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:13 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 17:00:19 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//throw std::invalid_argument( "received negative value" );

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat():_name("Stig")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):_name(src.getName()), _grade(src.getGrade())
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{

}
int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

Bureaucrat::Bureaucrat(std::string const & name, unsigned int grade):_name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade == 0)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade = (int)grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is to high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is to low");
}


void Bureaucrat::gradeUp(unsigned int n)
{
	if (n > 149 || _grade - n <= 0)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade -= (int)n;
}

void Bureaucrat::gradeDown(unsigned int n)
{
	if (n > 149 || _grade + n > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade += (int)n;
}


Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(
		GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(
		GradeTooHighException const & src)
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(
		GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(
		GradeTooLowException const & src)
{}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}




