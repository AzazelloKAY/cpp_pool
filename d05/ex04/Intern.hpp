/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:13:11 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 15:40:09 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
private:
	Form *createSh(std::string const & target);
	Form *createPr(std::string const & target);
	Form *createRo(std::string const & target);

public:
	Intern();
	~Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);

	Form *makeForm(std::string frmName, std::string frmTarget);

	class UnknownFormException: public std::exception
	{
	public:
		UnknownFormException();
		virtual ~UnknownFormException() throw();
		UnknownFormException(UnknownFormException const &);
		UnknownFormException &operator=(UnknownFormException const &);

		virtual const char* what() const throw();
	};

};


#endif




