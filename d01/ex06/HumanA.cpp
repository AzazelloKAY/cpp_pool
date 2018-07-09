/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA()
{
	_name = "unknown";
}

HumanA::HumanA(std::string name, Weapon const & w)
{
	_name = name;
	_weapon = &(Weapon&)w;
}

HumanA::~HumanA()
{
}

Weapon const & HumanA::getWeapon()
{
	return (*_weapon);
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "\n";
}