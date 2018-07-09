/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:02:17 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/07 19:33:22 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(Cure const & src):AMateria(src)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(Cure const & src)
{
	setXP(src.getXP());
	setType(src.getType());
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	riseXP();
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
