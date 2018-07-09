/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 21:13:42 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/25 20:57:27 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

//assignment overload
ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	_hp = src.getHp();
	_maxHp = src.getMaxHp();
	_ep = src.getEp();
	_maxEp = src.getMaxEp();
	_lvl = src.getLvl();
	_meleeAttackDmg = src.getMeleeAttackDmg();
	_rangedAttackDmg = src.getRangedAttackDmg();
	_armorDmgReduction = src.getArmorDmgReduction();
	_name = src.getName();
	return (*this);
}

//constructor
ClapTrap::ClapTrap()
{
	srand (time(0));
	_maxHp = 100;
	_hp = _maxHp;
	_maxEp = 100;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armorDmgReduction = 5;
	_name = "Claptrap";
	std::cout << ">> class 'ClapTrap'`s constructor >> " <<_name
			  << " Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ClapTrap::ClapTrap(std::string name)
{
	srand (time(0));
	_maxHp = 100;
	_hp = _maxHp;
	_maxEp = 100;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armorDmgReduction = 5;
	_name = name;
	std::cout << ">> class 'ClapTrap'`s constructor >> " << _name
			  << "Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "~~ class 'ClapTrap' >> " << _name
			  << " destruction\n";
}

//GetTers
std::string ClapTrap::getName() const
{
	return (_name);
}

int ClapTrap::getHp() const
{
	return (_hp);
}

int ClapTrap::getEp() const
{
	return (_ep);
}

int ClapTrap::getMaxHp() const
{
	return (_maxHp);
}

int ClapTrap::getMaxEp() const
{
	return (_maxEp);
}

int ClapTrap::getLvl() const
{
	return (_lvl);
}

int ClapTrap::getMeleeAttackDmg() const
{
	return (_meleeAttackDmg);
}

int ClapTrap::getRangedAttackDmg() const
{
	return (_rangedAttackDmg);
}

int ClapTrap::getArmorDmgReduction() const
{
	return (_armorDmgReduction);
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> melee attacks <" << target
			  << "> at range, causing <" << _meleeAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> ranged attacks <" << target
			  << "> at range, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::stupidAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> did something unbelievable to <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::fartAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> fart at <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::toothpickAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> stab with toothpick <" << target
			  << ">, causing <" << _meleeAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::stardestroyerAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> attacks from space <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void ClapTrap::breadAttack(std::string const &target)
{
	std::cout << "> class 'ClapTrap' >> <" << _name
			  << "> attacks with bagel <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}


void ClapTrap::takeDamage(unsigned int amount)
{
	amount = (amount < _armorDmgReduction) ? 0 : amount - _armorDmgReduction;
	amount = (amount > _maxHp) ? _maxHp : amount;
	if (_hp <= 0)
	{
		std::cout << "> class 'ClapTrap' >> " << _name
				  << "already dead.\n";
		return;
	}
	_hp = (_hp < amount) ? 0 : _hp - amount;

	std::cout << "> class 'ClapTrap' >> " << _name
			  << " Dou, I'M taking damage :`(\n";
	if (_hp <= 0)
		std::cout << "> class 'ClapTrap' >> " << _name
				  << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	amount = (amount > _maxHp) ? (unsigned int)_maxHp : amount;
	_hp = (_hp + amount > _maxHp) ? (unsigned int)_maxHp : _hp + amount;
	if (amount > 0)
		std::cout << "> class 'ClapTrap' >> " <<_name
				  << " O-KAY! Thanks for giving me a second chance, God. "
				  << "I really appreciate it.\n";
}