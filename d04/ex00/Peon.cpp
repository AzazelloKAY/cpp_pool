/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:03:02 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 20:48:36 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon():Victim()
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(std::string const & name):Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon & Peon::operator= (Peon const & src)
{
	_name = src.getName();
	return (*this);
}

Peon::Peon(Peon const & src):Victim(src.getName())
{
	std::cout << "Zog zog.\n";
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony !\n";
}


