/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:35:32 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/26 17:11:04 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

//******************
OfficeBlock::IncompleteOfficeException::IncompleteOfficeException() {}
OfficeBlock::IncompleteOfficeException::~IncompleteOfficeException() throw() {}
OfficeBlock::IncompleteOfficeException::IncompleteOfficeException(IncompleteOfficeException const & src)
{
	*this = src;
}
OfficeBlock::IncompleteOfficeException& OfficeBlock::IncompleteOfficeException::operator=(IncompleteOfficeException const & src){
	(void)src;
	return (*this);
}
const char* OfficeBlock::IncompleteOfficeException::what() const throw(){
	return ("Not all staff are in place");
}

OfficeBlock::OfficeBlock()
{
	_in = NULL;
	_bExec = NULL;
	_bSign = NULL;
}

OfficeBlock::~OfficeBlock() {}

void OfficeBlock::setIntern(Intern *i)
{
	_in = i;
}

void OfficeBlock::setSigner(Bureaucrat *b)
{
	_bSign = b;
}

void OfficeBlock::setExecutor(Bureaucrat *b)
{
	_bExec = b;
}

void OfficeBlock::doBureaucracy(std::string const & frmName, std::string const & trgName)
{
	if (_in == NULL || _bExec == NULL || _bSign == NULL)
		throw (IncompleteOfficeException());
	Form *frm = _in->makeForm(frmName, trgName);
	_bSign->signForm(*frm);
	_bExec->executeForm(*frm);
}