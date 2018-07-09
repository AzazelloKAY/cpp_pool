/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:17:22 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 16:57:04 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int 				_grade;

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat(std::string const &, unsigned int);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &);

	std::string getName() const;
	int			getGrade() const;

	void 		gradeUp(unsigned int);
	void		gradeDown(unsigned int);

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

std::ostream & operator<<(std::ostream &out, Bureaucrat const &);


#endif
