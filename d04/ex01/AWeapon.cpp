/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:31:58 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/30 20:06:26 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}

AWeapon& AWeapon::operator=(AWeapon const &src)
{
	_name = src.getName();
	_apcost = src.getAPCost();
	_damage = src.getDamage();
	return (*this);
}

AWeapon::AWeapon()
{
	_name = "";
	_apcost = 0;
	_damage = 0;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{
}

void AWeapon::setName(std::string const &name)
{
	_name = name;
}

void AWeapon::setAPCost(int const &apcost)
{
	_apcost = apcost;
}

void AWeapon::setDamage(int const &damage)
{
	_damage = damage;
}