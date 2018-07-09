/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 22:08:28 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/22 20:24:14 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &src);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void stupidAttack(std::string const &target);
	void fartAttack(std::string const &target);
	void toothpickAttack(std::string const &target);
	void stardestroyerAttack(std::string const &target);
	void breadAttack(std::string const &target);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(std::string const &target);

	std::string getName() const;

	int getHp() const;
	int getMaxHp() const;
	int getEp() const;
	int getMaxEp() const;
	int getLvl() const;
	int getMeleeAttackDmg() const;
	int getRangedAttackDmg() const;
	int getArmorDmgReduction() const;


private:
	int _hp;
	int _maxHp;
	int _ep;
	int _maxEp;
	int _lvl;
	int _meleeAttackDmg;
	int _rangedAttackDmg;
	int _armorDmgReduction;
	std::string _name;
};

#endif
