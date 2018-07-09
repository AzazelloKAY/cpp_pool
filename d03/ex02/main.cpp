/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/23 20:53:37 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	FragTrap clap;
	FragTrap trap("CustomClapppppttrrr");

	clap.vaulthunter_dot_exe("Jack");
	clap.vaulthunter_dot_exe("Jack");
	clap.vaulthunter_dot_exe("Jones");
	clap.vaulthunter_dot_exe("Jack");
	clap.vaulthunter_dot_exe("Jack");
	clap.vaulthunter_dot_exe("Jack");

	trap.takeDamage(50);
	trap.takeDamage(50);
	trap.beRepaired(10);
	trap.takeDamage(50);
	trap.takeDamage(50);

	ScavTrap scav;
	ScavTrap strap("ScavTTTtrap");

	scav.challengeNewcomer("Jack");
	scav.challengeNewcomer("Jack");
	scav.challengeNewcomer("Jones");
	scav.challengeNewcomer("Jack");
	scav.challengeNewcomer("Jack");
	scav.challengeNewcomer("Jack");

	strap.takeDamage(50);
	strap.takeDamage(50);
	strap.beRepaired(10);
	strap.takeDamage(50);
	strap.takeDamage(50);

	return 0;
}
