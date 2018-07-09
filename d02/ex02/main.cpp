/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:13:27 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/20 15:21:01 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void )
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout <<"1 "<< a << std::endl;
	std::cout <<"2 "<< ++a << std::endl;
	std::cout <<"3 "<< a << std::endl;
	std::cout <<"4 "<< a++ << std::endl;
	std::cout <<"5 "<< a << std::endl;
	std::cout <<"6 "<< b << std::endl;
	std::cout <<"7 "<< Fixed::max( a, b ) << std::endl;
	
	return 0;
}
