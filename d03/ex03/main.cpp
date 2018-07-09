/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/23 22:11:29 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main( void )
{
	FragTrap clap;
	FragTrap frag("FragA");

	clap.vaulthunter_dot_exe("Jack");
	clap.vaulthunter_dot_exe("Jones");
	clap.vaulthunter_dot_exe("Jack");

	frag.takeDamage(50);
	frag.beRepaired(10);
	frag.takeDamage(50);
	frag.takeDamage(50);

	ScavTrap scav;
	ScavTrap strap("SrakA");

	scav.challengeNewcomer("Jack");
	scav.challengeNewcomer("Jones");
	scav.challengeNewcomer("Jack");

	strap.takeDamage(50);
	strap.beRepaired(10);
	strap.takeDamage(50);

	NinjaTrap ninja("NindziakA");

	ninja.ninjaUniShoebox(frag);
	ninja.ninjaUniShoebox(strap);
	ninja.ninjaUniShoebox(ninja);

	ninja.ninjaShoebox(frag);

	return 0;
}
