/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:08:17 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/21 20:47:23 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap &operator=(FragTrap const & src);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void stupidAttack(std::string const & target);
	void fartAttack(std::string const & target);
	void toothpickAttack(std::string const & target);
	void stardestroyerAttack(std::string const & target);
	void breadAttack(std::string const & target);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);

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
	int _ep; //energyPoints
	int _maxEp;
	int _lvl;
	int _meleeAttackDmg;
	int _rangedAttackDmg;
	int _armorDmgReduction;
	std::string _name;

};

#endif