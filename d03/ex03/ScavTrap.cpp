/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 22:06:18 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/23 22:23:12 by akokoshk         ###   ########.fr       */
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
	_maxEp = 50;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 20;
	_rangedAttackDmg = 15;
	_armorDmgReduction = 3;
	_name = "Scavverrr";
	std::cout << ">> class 'ScavTrap'`s constructor >> " <<_name
			  << " Another 1 Directive: Protect humanity! "
			  << "Another 2 Directive: Obey Jack at all costs. Another 3 Directive: Dance!\n";
}

ScavTrap::ScavTrap(std::string name)
{
	srand (time(0));
	_maxHp = 100;
	_hp = _maxHp;
	_maxEp = 50;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 20;
	_rangedAttackDmg = 15;
	_armorDmgReduction = 3;
	_name = name;
	std::cout << ">> class 'ScavTrap'`s constructor >> " <<_name
			  << " Another 1 Directive: Protect humanity! "
			  << "Another 2 Directive: Obey Jack at all costs. Another 3 Directive: Dance!\n";
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "~ ScavTrap destruction >> " <<_name
			  << " is completely destroyed in !!AnotheR!! way\n";
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
	std::cout << "> class 'ScavTrap' >> " << _name << " defies " << target
			  << " in a " << challenge[num] << " challenge.\n";
}
