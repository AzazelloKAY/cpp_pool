/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:07:01 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/07 19:59:50 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "";
	_iVol = 0;
	for(int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{
	cleanInv();
}

Character& Character::operator=(Character const & src)
{
	cleanInv();

	_name = src.getName();
	_iVol = src.getIVol();

	if (_iVol > 0)
		for(int i = 0; i < _iVol; i++)
			_inv[i] = src.getMateria(i)->clone();

	return (*this);
}

Character::Character(std::string const & name)
{
	_name = name;
	_iVol = 0;
	for(int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < _iVol && &target != NULL)
	{
		_inv[idx]->use(target);
	}
}

std::string const& Character::getName() const
{
	return (_name);
}

void Character::setName(std::string const & name)
{
	_name = name;
}

AMateria* Character::getMateria(int id) const
{
	if (0 <= id && id < _iVol)
		return (_inv[id]);
	return (NULL);
}

int Character::getIVol() const
{
	return (_iVol);
}

void Character::cleanInv()
{
	for(int i = 0; i < _iVol; i++)
		if (_inv[i] != NULL)
		{
			delete (_inv[i]);
			_inv[i] = NULL;
		}
	_iVol = 0;
}

void Character::equip(AMateria *m)
{
	if (_iVol < 4 && m != NULL)
	{
		_inv[_iVol] = m;
		_iVol++;
	}
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < _iVol)
	{
		_inv[idx] = NULL;
		if (idx != _iVol - 1)
		{
			_inv[idx] = _inv[_iVol - 1];
			_inv[_iVol - 1] = NULL;

		}
		_iVol--;
	}
}


