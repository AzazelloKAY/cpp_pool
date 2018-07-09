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
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *ponyOnStack = new Pony();
	std::cout << "Pony on heap:\nName -\t" << ponyOnStack->getName()
			  << "\nAge -\t" << ponyOnStack->getAge() << "\n";
	delete ponyOnStack;
}

void ponyOnTheStack()
{
	Pony ponyOnHeap("Sleipnir", 10000);
	std::cout << "Pony on stack:\nName -\t" << ponyOnHeap.getName()
			  << "\nAge -\t" << ponyOnHeap.getAge() << "\n";
}

int		main( void )
{
	ponyOnTheHeap();

	ponyOnTheStack();

	return 0;
}
