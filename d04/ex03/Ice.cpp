/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:01:41 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 22:02:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(Ice const & src):AMateria(src)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(Ice const & src)
{
	setXP(src.getXP());
	setType(src.getType());
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	riseXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}




