/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:33:52 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 21:21:48 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"


RadScorpion::RadScorpion():Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &src):Enemy(src)
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
}

RadScorpion& RadScorpion::operator=(RadScorpion const &src)
{
	setHp(src.getHP());
	setType(src.getType());
	return  (*this);
}

void RadScorpion::takeDamage(int dmg)
{
	if (getHP() > 0)
	{
		Enemy::takeDamage(dmg - 3);
		if (getHP() <= 0)
			std::cout << "* SPROTCH *\n";
	}
}


