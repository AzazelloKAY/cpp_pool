/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:48:17 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

int main( void )
{

	SuperTrap supr;
	ScavTrap scavTarget("PureTarget");

	std::cout << supr.getName() << "\n";
	supr.rangedAttack("vassaA");
	supr.meleeAttack(scavTarget);

	return 0;
}

//https://stackoverflow.com/questions/21558/in-c-what-is-a-virtual-base-class?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa