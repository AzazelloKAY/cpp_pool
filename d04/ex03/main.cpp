/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/07 19:52:49 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"



int main( void )
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character( "zaz" );
	ICharacter* maz = new Character( "Maz" ); //test

	AMateria* tmp;
	tmp = src->createMateria( "ice" );
	zaz->equip(tmp);
	maz->equip(tmp->clone()); //test
	tmp = src->createMateria( "cure" );
	maz->equip(tmp->clone()); //test
	zaz->equip(tmp);

	*(Character*)maz = *(Character*)zaz;

	ICharacter* bob = new Character( "bob" );
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	delete bob;
	delete zaz;
	delete src;

	return 0;
}
