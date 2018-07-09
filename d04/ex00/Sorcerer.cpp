/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:01:40 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 20:34:13 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

std::string Sorcerer::getName() const
{
	return (_name);
}

std::string Sorcerer::getTitle() const
{
	return (_title);
}

void Sorcerer::setName(std::string const &name)
{
	_name = name;
}

void Sorcerer::setTitle(std::string const &title)
{
	_title = title;
}

Sorcerer::Sorcerer()
{
}

Sorcerer & Sorcerer::operator=(Sorcerer const &src)
{
	_name = src.getName();
	_title = src.getTitle();
	return (*this);
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	std::cout << _name << ", " << _title << ", is born !\n";
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title <<", is dead. Consequences will never be the same !\n";
}

std::ostream & operator<<(std::ostream & out, Sorcerer const & src)
{
	out << "I am "<< src.getName() << ", " << src.getTitle() << ", and I like ponies !\n";
	return (out);
}

void Sorcerer::polymorph(Victim const & v) const
{
	v.getPolymorphed();
}

