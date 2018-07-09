/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 22:06:18 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/25 21:06:36 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

//assignment overload
ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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
ScavTrap::ScavTrap()
{
	srand (time(0));
	_maxHp = 100;
	_hp = _maxHp;
	_maxEp = 100;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 20;
	_rangedAttackDmg = 15;
	_armorDmgReduction = 3;
	_name = "Scavtrap";
	std::cout << _name << "> Another 1 Directive: Protect humanity! "
			  << "Another 2 Directive: Obey Jack at all costs. Another 3 Directive: Dance!\n";
}

ScavTrap::ScavTrap(std::string name)
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
	std::cout << _name << "> Another 1 Directive: Protect humanity! "
			  << "Another 2 Directive: Obey Jack at all costs. Another 3 Directive: Dance!\n";

}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << "> is completely destroyed in !!AnotheR!! way\n";
}

//GetTers
std::string ScavTrap::getName() const
{
	return (_name);
}

int ScavTrap::getHp() const
{
	return (_hp);
}

int ScavTrap::getEp() const
{
	return (_ep);
}

int ScavTrap::getMaxHp() const
{
	return (_maxHp);
}

int ScavTrap::getMaxEp() const
{
	return (_maxEp);
}

int ScavTrap::getLvl() const
{
	return (_lvl);
}

int ScavTrap::getMeleeAttackDmg() const
{
	return (_meleeAttackDmg);
}

int ScavTrap::getRangedAttackDmg() const
{
	return (_rangedAttackDmg);
}

int ScavTrap::getArmorDmgReduction() const
{
	return (_armorDmgReduction);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount = (amount < _armorDmgReduction) ? 0 : amount - _armorDmgReduction;
	amount = (amount > _maxHp) ? _maxHp : amount;
	if (_hp <= 0)
	{
		std::cout << _name << "> already dead, in !!AnotheR!! way.\n";
		return;
	}
	_hp = (_hp < amount) ? 0 : _hp - amount;

	std::cout << _name << "> Dou, I'M taking damage :`( ,in !!AnotheR!! way\n";
	if (_hp <= 0)
		std::cout << _name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!, in !!AnotheR!! way\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> melee attacks <" << target
			  << "> at range, causing <" << _meleeAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> ranged attacks <" << target
			  << "> at range, causing <" << _rangedAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::stupidAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> did something unbelievable to <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::fartAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> fart at <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::toothpickAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> stab with toothpick <" << target
			  << ">, causing <" << _meleeAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::stardestroyerAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> attacks from space <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::breadAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> attacks with bagel <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!, in !!AnotheR!! way\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	amount = (amount > _maxHp) ? (unsigned int)_maxHp : amount;
	_hp = (_hp + amount > _maxHp) ? (unsigned int)_maxHp : _hp + amount;
	if (amount > 0)
		std::cout << _name
				  << "> O-KAY! Thanks for giving me a second chance, God. "
				  << "I really appreciate it, in !!AnotheR!! way\n";
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge[7] =
	{
		"spits cockroaches",
		"burger eating",
		"running in bags",
		"rock paper scissors",
		"space swimming",
		"no breathing",
		"math",
	};
	int num = rand() % 7;
	std::cout << _name << " defies " << target
			  << " in a " << challenge[num] << " challenge.\n";
}
