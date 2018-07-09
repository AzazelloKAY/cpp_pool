/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main( void )
{
	ZombieEvent cemetery("plane zombie");
	Zombie *z1 = cemetery.newZombie("valera");
	cemetery.setZombieType("trup typogo programmista");
	Zombie *z2 = cemetery.randomChump();

	std::cout << "Creating zomby on stack \n";
	Zombie z3;
	z3.announce();

	delete z1;
	delete z2;

	return 0;
}
