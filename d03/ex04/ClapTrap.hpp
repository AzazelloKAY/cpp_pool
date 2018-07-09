/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 21:13:26 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/22 21:35:52 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const & src);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void stupidAttack(std::string const & target);
	void fartAttack(std::string const & target);
	void toothpickAttack(std::string const & target);
	void stardestroyerAttack(std::string const & target);
	void breadAttack(std::string const & target);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName() const;
	int getHp() const;
	int getMaxHp() const;
	int getEp() const;
	int getMaxEp() const;
	int getLvl() const;
	int getMeleeAttackDmg() const;
	int getRangedAttackDmg() const;
	int getArmorDmgReduction() const;

protected:
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
