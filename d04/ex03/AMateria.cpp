/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:53:08 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 21:44:12 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	xp_ = 0;
	_type = "";
}

AMateria::AMateria(std::string const &type)
{
	xp_ = 0;
	_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria& AMateria::operator=(AMateria const &src)
{
	xp_ = src.getXP();
	_type = src.getType();
	return (*this);
}

void AMateria::use(ICharacter &target)
{
}

AMateria::~AMateria()
{
}

void AMateria::riseXP()
{
	xp_ += 10;
}

std::string const& AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (xp_);
}

void AMateria::setXP(int xp)
{
	xp_ = xp;
}

void AMateria::setType(std::string const &type)
{
	_type = type;
}
