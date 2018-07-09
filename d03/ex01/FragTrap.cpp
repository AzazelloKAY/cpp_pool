/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:08:46 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/25 21:05:58 by akokoshk         ###   ########.fr       */
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
	_name = "Claptrap";
	std::cout << _name << "> Directive one: Protect humanity! "
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
	std::cout << _name << "> Directive one: Protect humanity! "
			  << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";

}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << _name << "> is completely destroyed\n";
}

//GetTers
std::string FragTrap::getName() const
{
	return (_name);
}

int FragTrap::getHp() const
{
	return (_hp);
}

int FragTrap::getEp() const
{
	return (_ep);
}

int FragTrap::getMaxHp() const
{
	return (_maxHp);
}

int FragTrap::getMaxEp() const
{
	return (_maxEp);
}

int FragTrap::getLvl() const
{
	return (_lvl);
}

int FragTrap::getMeleeAttackDmg() const
{
	return (_meleeAttackDmg);
}

int FragTrap::getRangedAttackDmg() const
{
	return (_rangedAttackDmg);
}

int FragTrap::getArmorDmgReduction() const
{
	return (_armorDmgReduction);
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = (amount < _armorDmgReduction) ? 0 : amount - _armorDmgReduction;
	amount = (amount > _maxHp) ? _maxHp : amount;
	if (_hp <= 0)
	{
		std::cout << _name << "> already dead.\n";
		return;
	}
	_hp = (_hp < amount) ? 0 : _hp - amount;

	std::cout << _name << "> Dou, I'M taking damage :`(\n";
	if (_hp <= 0)
		std::cout << _name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> melee attacks <" << target
			  << "> at range, causing <" << _meleeAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> ranged attacks <" << target
			  << "> at range, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::stupidAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> did something unbelievable to <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::fartAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> fart at <" << target
			  << "> and causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::toothpickAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> stab with toothpick <" << target
			  << ">, causing <" << _meleeAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::stardestroyerAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> attacks from space <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::breadAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name
			  << "> attacks with bagel <" << target
			  << ">, causing <" << _rangedAttackDmg
			  << "> points of damage!\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	amount = (amount > _maxHp) ? (unsigned int)_maxHp : amount;
	_hp = (_hp + amount > _maxHp) ? (unsigned int)_maxHp : _hp + amount;
	if (amount > 0)
		std::cout << _name
				  << "> O-KAY! Thanks for giving me a second chance, God. "
				  << "I really appreciate it.\n";
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
		std::cout << _name << "> try to attack " << target
				  << " but he is too weak and can only make angry look :(\n";
}


