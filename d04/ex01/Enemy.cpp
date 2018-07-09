/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:33:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 21:09:39 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy()
{
	_hp = 0;
	_type = "";
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::~Enemy()
{
}

Enemy & Enemy::operator=(Enemy const & src)
{
	_hp = src.getHP();
	_type = src.getType();
	return (*this);
}

int Enemy::getHP() const
{
	return (_hp);
}

std::string Enemy::getType() const
{
	return (_type);
}

void Enemy::setHp(int hp)
{
	_hp = hp;
}

void Enemy::setType(std::string const & type)
{
	_type = type;
}

void Enemy::takeDamage(int dmg)
{
	if(dmg > 0 && _hp > 0)
		_hp -= dmg;
}