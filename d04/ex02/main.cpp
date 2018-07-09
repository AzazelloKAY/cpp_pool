/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/04 20:43:52 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"



int main( void )
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	//try to add jim second time
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	ISquad* sq2 = new Squad;
	*(Squad*)sq2 = *(Squad*)vlc;
	sq2->push(new AssaultTerminator);
	sq2->push(new TacticalMarine);

	std::cout << "\nSq2:\n";
	sq2->getUnit(0)->battleCry();
	sq2->getUnit(1)->battleCry();
	sq2->getUnit(2)->battleCry();
	sq2->getUnit(3)->battleCry();

	std::cout << "\nVLC purify squad:\n";
	delete vlc;
	std::cout << "\nSq2 purify all squad:\n";
	delete (sq2);

	return 0;
}
