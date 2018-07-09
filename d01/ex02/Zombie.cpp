/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
	std::cout << "<" << _name << " (" << _type << ")> i`m alive\n";
	announce();
}

Zombie::Zombie( void )
{
	_name = "Zema";
	_type = "tupo zombak";
	std::cout << "<" << _name << " (" << _type << ")> i`m alive\n";
	announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> i`m dying\n";
}

