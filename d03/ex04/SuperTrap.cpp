/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 20:03:44 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:42:57 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
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

SuperTrap::SuperTrap()
{
	_maxHp = FragTrap::_ftMaxHp;
	_hp = _maxHp;
	_maxEp = NinjaTrap::_ntMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = NinjaTrap::_ntMeleeDmg;
	_rangedAttackDmg = FragTrap::_ftRangeDmg;
	_armorDmgReduction = FragTrap::_ftArmor;
	_name = "SuperDuperTrapper";
	std::cout << ">> class 'SuperTrap'`s constructor >> " << _name
			  << " Directive one: Protect humanity! and so on\n";
}

SuperTrap::SuperTrap(std::string const & name)
{
	_maxHp = FragTrap::_ftMaxHp;
	_hp = _maxHp;
	_maxEp = NinjaTrap::_ntMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = NinjaTrap::_ntMeleeDmg;
	_rangedAttackDmg = FragTrap::_ftRangeDmg;
	_armorDmgReduction = FragTrap::_ftArmor;
	_name = name;
	std::cout << ">> class 'SuperTrap'`s constructor >> " << _name
			  << " Directive one: Protect humanity! and so on\n";
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
}

SuperTrap::~SuperTrap()
{
	std::cout << "~ SuperTrap destruction >> " << _name
			  << "is completely destroyed\n";
}

void SuperTrap::rangedAttack (std::string const & target)
{
	std::cout << " class SuperTrap call attack function of FragTrap\n";
	FragTrap::rangedAttack(target);
	FragTrap::vaulthunter_dot_exe(target);
}

void SuperTrap::meleeAttack(ClapTrap const & clap)
{
	std::cout << " class SuperTrap call attack function of NinjaTrap\n";
	NinjaTrap::meleeAttack(clap.getName());
	NinjaTrap::ninjaUniShoebox(clap);
}
