/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:54:13 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/30 22:00:22 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &src):AWeapon(src)
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}

PowerFist& PowerFist::operator=(PowerFist const &src)
{
	setName(src.getName());
	setAPCost(src.getAPCost());
	setDamage(src.getDamage());
	return (*this);
}


