/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:36:00 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 22:08:33 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "string"
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *_gun;

public:
	Character();
	Character(Character const & src);
	Character(std::string const & name);
	~Character();
	Character & operator=(Character const & src);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string virtual getName() const; // or make reference & ???
	int getAP() const;
	AWeapon *getWeapon() const;

	void setName(std::string const & name);
	void setAP (int ap);

};

std::ostream & operator<<(std::ostream & out, Character const & src);

#endif
