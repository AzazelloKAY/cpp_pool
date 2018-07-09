/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:08:46 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/23 22:16:22 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
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
	_maxHp = 100;
	_hp = _maxHp;
	_maxEp = 100;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armorDmgReduction = 5;
	_name = "Frager";
	std::cout << ">> class 'FragTrap'`s constructor >> " << _name
			  << " Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::FragTrap(std::string name)
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
	void (FragTrap::*attack[7])(std::string const & target) =
	{
		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack,
		&FragTrap::stupidAttack,
		&FragTrap::fartAttack,
		&FragTrap::toothpickAttack,
		&FragTrap::stardestroyerAttack,
		&FragTrap::breadAttack,
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


