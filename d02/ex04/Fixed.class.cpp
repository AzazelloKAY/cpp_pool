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
#include <cmath>
#include "Fixed.class.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	_val = 0;
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(Fixed const & f)
{
	_val = f.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const & f)
{
	*this = f;
}

int Fixed::getRawBits() const
{
	return (_val);
}

void Fixed::setRawBits(int const & val)
{
	_val = val;
}

float Fixed::toFloat() const
{
	return (_val / (float)(1 << _fracBits));
}

int Fixed::toInt() const
{
	return (_val / (1 << _fracBits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & f)
{
	out << f.toFloat();
	return (out);
}

Fixed::Fixed(int const val)
{
	_val = (val << _fracBits);
}

Fixed::Fixed(float const val)
{
	_val = (int)roundf(val * (1 << _fracBits));
}

// fixed++
Fixed & Fixed::operator++()
{
	_val++;
	return (*this);
}

// ++fixed
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_val++;
	return (tmp);
}

// fixed--
Fixed & Fixed::operator--()
{
	_val--;
	return (*this);
}

// --fixed
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_val--;
	return (tmp);
}

Fixed Fixed::operator+ (Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator- (Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator* (Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

//деление флоат на флоат
Fixed Fixed::operator/ (Fixed const &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

bool Fixed::operator< (Fixed const &f)
{
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator<= (Fixed const &f)
{
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator> (Fixed const &f)
{
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator>= (Fixed const &f)
{
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator== (Fixed const &f)
{
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!= (Fixed const &f)
{
	return (this->toFloat() != f.toFloat());
}

//min max
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a < (Fixed)b) ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a > (Fixed)b) ? a : b);
}

