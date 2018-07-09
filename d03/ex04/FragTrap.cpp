/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:08:46 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:20:17 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int FragTrap::_ftMaxHp = 100;
int FragTrap::_ftMaxEp = 100;
int FragTrap::_ftMeleeDmg = 30;
int FragTrap::_ftRangeDmg = 5;
int FragTrap::_ftArmor = 0;

//assignment overload
FragTrap & FragTrap::operator=(FragTrap const & src)
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
FragTrap::FragTrap()
{
	srand (time(0));
	_maxHp = _ftMaxHp;
	_hp = _maxHp;
	_maxEp = _ftMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = _ftMeleeDmg;
	_rangedAttackDmg = _ftRangeDmg;
	_armorDmgReduction = _ftArmor;
	_name = "Frager";
	std::cout << ">> class 'FragTrap'`s constructor >> " << _name
			  << " Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::FragTrap(std::string const & name)
{
	srand (time(0));
	_maxHp = _ftMaxHp;
	_hp = _maxHp;
	_maxEp = _ftMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = _ftMeleeDmg;
	_rangedAttackDmg = _ftRangeDmg;
	_armorDmgReduction = _ftArmor;
	_name = name;
	std::cout << ">> class 'FragTrap'`s constructor >> " << _name
			  << "Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "~ FragTrap destruction >> " << _name
			  << "is completely destroyed\n";
}


void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	void (ClapTrap::*attack[7])(std::string const & target) =
	{
		&ClapTrap::rangedAttack,
		&ClapTrap::meleeAttack,
		&ClapTrap::stupidAttack,
		&ClapTrap::fartAttack,
		&ClapTrap::toothpickAttack,
		&ClapTrap::stardestroyerAttack,
		&ClapTrap::breadAttack,
	};

	if (_ep >= 25)
	{
		_ep -= 25;
		int num = rand() % 7;
		(this->*attack[num])(target);
	}
	else
		std::cout << "> class 'FragTrap' >> " << _name
				  << "> try to attack " << target
				  << " but he is too weak and can only make angry look :(\n";
}


