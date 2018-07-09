/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 20:17:28 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/01 21:40:17 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & src)
{
	/*
	 * make copy
	 */
	return (*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *\n";
}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}