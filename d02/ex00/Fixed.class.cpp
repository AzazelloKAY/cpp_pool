/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:13:27 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/20 15:21:01 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.class.hpp"


const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	_val = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(Fixed const & f)
{
	std::cout << "Assignation operator called\n";
	_val = f.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const & f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (_val);
}

void Fixed::setRawBits(int const & val)
{
	_val = val;
}
