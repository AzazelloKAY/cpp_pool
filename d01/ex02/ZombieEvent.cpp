/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *res;
	res = new Zombie(name, _type);
	return (res);
}

Zombie *ZombieEvent::randomChump()
{
	srand (time(0));
	int rndLen = rand() % 10 + 1;
	srand (time(0));
	std::string rndName = "";
	int i;
	for (i = 0; i < rndLen; i++)
	{
		char t = (char)(rand() % 25 + 97);
		rndName += t;
	}
	srand (time(0));
	return(newZombie(rndName));
}

ZombieEvent::ZombieEvent(void)
{
	_type = "her";
}

ZombieEvent::ZombieEvent(std::string type)
{
	_type = type;
}

ZombieEvent::~ZombieEvent()
{
}