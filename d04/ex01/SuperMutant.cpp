/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:54:28 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 21:19:03 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"


SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::SuperMutant(SuperMutant const &src):Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::~SuperMutant()
{
}

SuperMutant& SuperMutant::operator=(SuperMutant const &src)
{
	setHp(src.getHP());
	setType(src.getType());
	return  (*this);
}

void SuperMutant::takeDamage(int dmg)
{
	if (getHP() > 0)
	{
		Enemy::takeDamage(dmg - 3);
		if (getHP() <= 0)
			std::cout << "Aaargh ...\n";
	}
}