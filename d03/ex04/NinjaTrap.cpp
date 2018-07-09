/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:17:19 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:21:09 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

int NinjaTrap::_ntMaxHp = 60;
int NinjaTrap::_ntMaxEp = 120;
int NinjaTrap::_ntMeleeDmg = 60;
int NinjaTrap::_ntRangeDmg = 5;
int NinjaTrap::_ntArmor = 0;

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
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
NinjaTrap::NinjaTrap()
{
	srand (time(0));
	_maxHp = _ntMaxHp;
	_hp = _maxHp;
	_maxEp = _ntMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = _ntMeleeDmg;
	_rangedAttackDmg = _ntRangeDmg;
	_armorDmgReduction = _ntArmor;
	_name = "NniNjaaaas";
	std::cout << ">> class 'NinjaTrap'`s constructor >> " << _name
			  << " Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

NinjaTrap::NinjaTrap(std::string const & name)
{
	srand (time(0));
	_maxHp = _ntMaxHp;
	_hp = _maxHp;
	_maxEp = _ntMaxEp;
	_ep = _maxEp;
	_lvl = 1;
	_meleeAttackDmg = _ntMeleeDmg;
	_rangedAttackDmg = _ntRangeDmg;
	_armorDmgReduction = _ntArmor;
	_name = name;
	std::cout << ">> class 'NinjaTrap'`s constructor >> " << _name
			  << "Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "~ NinjaTrap destruction >> " << _name
			  << "is completely destroyed\n";
}

void NinjaTrap::ninjaUniShoebox(ClapTrap const & clap)
{
	std::cout << "__Ninjatrap 'shoebox' function is taking action on "
			  << clap.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "##Ninjatrap 'shoebox' function is taking action on ClapTrap"
			  << clap.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &clap)
{
	std::cout << "@@@@@@ Ninjatrap 'shoebox' function is taking action on FragTrap"
			  << clap.getName() << "\n";
	std::cout << "@@@@@@ But " << clap.getName() << " strike back\n";
	clap.vaulthunter_dot_exe(this->_name);
}

void NinjaTrap::ninjaShoebox(ScavTrap &clap)
{
	std::cout << "##Ninjatrap 'shoebox' function is taking action on ScavTrap"
			  << clap.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap &clap)
{
	std::cout << "##Ninjatrap 'shoebox' function is taking action on NinjaTrap"
			  << clap.getName() << "\n";
}