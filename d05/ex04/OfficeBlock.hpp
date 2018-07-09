/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:30:52 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 17:08:18 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
private:
	Intern *_in;
	Bureaucrat *_bSign, *_bExec;

public:
	OfficeBlock();
	~OfficeBlock();
//No other construction	must be possible (No copy, no assignation).

	void setIntern(Intern *);
	void setSigner(Bureaucrat *);
	void setExecutor(Bureaucrat *);

	void doBureaucracy(std::string const & frmName, std::string const & trgName);

	class IncompleteOfficeException: public std::exception
	{
	public:
		IncompleteOfficeException();
		virtual ~IncompleteOfficeException() throw();
		IncompleteOfficeException(IncompleteOfficeException const &);
		IncompleteOfficeException &operator=(IncompleteOfficeException const &);
		virtual const char* what() const throw();
	};

};


#endif
