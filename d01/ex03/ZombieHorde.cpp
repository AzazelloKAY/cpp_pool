/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::randomName()
{
	int rndLen = rand() % 10 + 1;
	std::string rndName = "";
	int i;
	for (i = 0; i < rndLen; i++)
	{
		char t = (char)(rand() % 25 + 97);
		rndName += t;
	}
	return(rndName);
}

ZombieHorde::ZombieHorde()
{
	_num = 1;
	_horde = new Zombie[_num];
	for (int i = 0; i < _num; i++)
	{
		_horde[i].setName(randomName());
	}
}

ZombieHorde::ZombieHorde(int n)
{
	_num = n;
	_horde = new Zombie[_num];
	for (int i = 0; i < _num; i++)
	{
		_horde[i].setName(randomName());
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] _horde;
}

void ZombieHorde::announce() const
{
	for(int i = 0; i < _num; i++)
	{
		_horde[i].announce();
	}
}

