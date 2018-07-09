/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:31:30 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 21:59:26 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include "string"

class AWeapon
{
private:
	std::string _name;
	int _apcost, _damage;

public:
	AWeapon();
	AWeapon(AWeapon const & src);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	AWeapon & operator= (AWeapon const & src);

	void setName(std::string const & name);
	void setAPCost(int const & apcost);
	void setDamage(int const & damage);

};

#endif
