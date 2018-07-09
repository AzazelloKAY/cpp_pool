/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:20:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 23:29:19 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("plane form"),_gradeForSign(150),_gradeForExc(150)
{
	_isSigned = false;
}

Form::~Form()
{}

Form& Form::operator=(Form const & src)
{
	_isSigned = src.getIsSigned();
	return (*this);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getGradeForExc() const
{
	return (_gradeForExc);
}

int Form::getGradeForSign() const
{
	return (_gradeForSign);
}

Form::Form(Form const & src):_name(src.getName()),_gradeForSign(src.getGradeForSign()),_gradeForExc(src.getGradeForExc())
{
	_isSigned = src.getIsSigned();
}

Form::Form(std::string const &name, unsigned int gSign, unsigned int gExc):_name(name),_gradeForSign((int)gSign),_gradeForExc((int)gExc)
{
	_isSigned = false;
	if (gSign > 150 || gExc > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (gSign == 0 || gExc == 0)
		throw (Bureaucrat::GradeTooHighException());
}

void Form::beSigned(Bureaucrat const &b)
{
	if (!_isSigned)
	{
		if (b.getGrade() <= _gradeForSign)
			_isSigned = true;
		else
			throw (Form::GradeTooLowException());
	}
}



//************************************************************************
const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is to high");
}
Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const & src)
{
	(void)src;
	return (*this);
}
//*********************
const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is to low");
}
Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException::GradeTooLowException(
		GradeTooLowException const & src)
{
	*this = src;
}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(
		GradeTooLowException const & src)
{
	(void)src;
	return (*this);
}
//*********************
const char* Form::UnsignedFormException::what() const throw()
{
	return ("The form is unsigned");
}
Form::UnsignedFormException::UnsignedFormException() {}
Form::UnsignedFormException::~UnsignedFormException() throw() {}
Form::UnsignedFormException::UnsignedFormException(UnsignedFormException const & src)
{
	*this = src;
}
Form::UnsignedFormException& Form::UnsignedFormException::operator=(UnsignedFormException const & src)
{
	(void)src;
	return (*this);
}
//************************************************************************

std::ostream & operator<<(std::ostream & out, Form const & src)
{
	std::string str = src.getName() + " <"+ (src.getIsSigned() ? "signed" : "unsigned") + ">";
	str += " form, with sign grade: " + std::to_string(src.getGradeForSign());
	str += " and grade for execute: " + std::to_string(src.getGradeForExc());
	out << str;
	return (out);
}

void Form::action() const {}

void Form::execute(Bureaucrat const &executor) const
{
	if (_isSigned)
	{
		if (executor.getGrade() <= _gradeForExc)
		{
			action();
		}
		else
		{
			throw (Form::GradeTooLowException());
		}
	}
	else
		throw(Form::UnsignedFormException());
}

