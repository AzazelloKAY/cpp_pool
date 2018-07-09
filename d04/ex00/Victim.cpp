/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:02:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 20:34:13 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

std::string Victim::getName() const
{
	return (_name);
}

void Victim::setName(std::string const & name)
{
	_name = name;
}

Victim::Victim()
{
	_name = "Zaz";
	std::cout << "Some random victim called " << _name << " just popped !\n";
}

Victim & Victim::operator=(Victim const & src)
{
	_name = src.getName();
	return (*this);
}

Victim::Victim(Victim const &src)
{
	*this = src;
	std::cout << "Some random victim called " << _name << " just popped !\n";
}

Victim::Victim(std::string const & name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just popped !\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason !\n";
}

std::ostream & operator<<(std::ostream & out, Victim const & src)
{
	out << "I'm " << src.getName() << " and I like otters !\n";
	return (out);
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep !\n";
}