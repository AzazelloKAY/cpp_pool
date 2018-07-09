/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/21 21:48:38 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main( void )
{
	FragTrap clap;
	FragTrap trap("trap");

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

	return 0;
}
