/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	_name = "unknown";
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

Weapon const & HumanB::getWeapon()
{
	return (*_weapon);
}

void HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "\n";
}