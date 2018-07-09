/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:20:29 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 18:59:07 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool 				_isSigned;
	const int			_gradeForSign;
	const int			_gradeForExc;


public:
	Form();
	Form(Form const &);
	~Form();
	Form &operator=(Form const &);
	Form(std::string const & name, unsigned int gSign, unsigned int gExc);

	std::string			getName() const;
	int					getGradeForSign() const;
	int					getGradeForExc() const;
	bool				getIsSigned() const;

	void				beSigned(Bureaucrat const &);


	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const &);
		GradeTooHighException &operator=(GradeTooHighException const &);

		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &);
		GradeTooLowException &operator=(GradeTooLowException const &);

		virtual const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream &out, Form const &);

#endif
