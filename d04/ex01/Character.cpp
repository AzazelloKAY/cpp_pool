/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:36:05 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/01 19:01:14 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	_name = "";
	_ap = 40;
	_gun = NULL;
}

Character::Character(std::string const &name)
{
	_name = name;
	_ap = 40;
	_gun = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character& Character::operator= (Character const & src)
{
	_name = src.getName();
	_ap = src.getAP();
	_gun = src.getWeapon();
	return (*this);
}

Character::~Character()
{
}

std::string Character::getName() const
{
	return (_name);
}

int Character::getAP() const
{
	return (_ap);
}

AWeapon* Character::getWeapon() const
{
	return (_gun);
}

void Character::setName(std::string const &name)
{
	_name = name;
}

void Character::setAP(int ap)
{
	_ap = ap;
}

void Character::equip(AWeapon *gun)
{
	_gun = gun;
}

void Character::recoverAP()
{
	if (_ap < 40)
	{
		_ap += 10;
		if (_ap > 40)
			_ap = 40;
	}
}

void Character::attack(Enemy *e)
{
	try
	{
		if (_gun == NULL || e == NULL)
			return;
		int gunAPcost = _gun->getAPCost();
		if (gunAPcost <= _ap && e->getHP() > 0)
		{
			_ap -= gunAPcost;
			std::cout << _name << " attacks " << e->getType()
					  << " with a " << _gun->getName() << "\n";
			_gun->attack();
			e->takeDamage(_gun->getDamage());
			if (e->getHP() <= 0)
				delete e;
		}
	}
	catch (int ex)
	{
		return;
	}
}

std::ostream & operator<<(std::ostream & out, Character const & src)
{
	std::string gunName;
	AWeapon *gun = src.getWeapon();
	if (gun == NULL)
		out << src.getName() << " has " << src.getAP() << " AP and is unarmed\n";
	else
		out << src.getName() << " has " << src.getAP() << " AP and wields a "
			<< gun->getName() << "\n";
	return (out);
}



