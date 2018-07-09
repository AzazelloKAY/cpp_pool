 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:13:27 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/20 15:21:01 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(int const val);
	Fixed(float const val);
	Fixed(Fixed const & f);
	~Fixed();

	Fixed & operator= (Fixed const &f);
	Fixed operator+ (Fixed const &f);
	Fixed operator- (Fixed const &f);
	Fixed operator* (Fixed const &f);
	Fixed operator/ (Fixed const &f);

	Fixed & operator++ ();
	Fixed operator++ ( int );
	Fixed & operator-- ();
	Fixed operator-- ( int );

	bool operator< (Fixed const &f);
	bool operator<= (Fixed const &f);
	bool operator> (Fixed const &f);
	bool operator>= (Fixed const &f);
	bool operator== (Fixed const &f);
	bool operator!= (Fixed const &f);


	static Fixed & min(Fixed &a, Fixed &b);
	static Fixed const & min(Fixed const &a, Fixed const &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static Fixed const & max(Fixed const &a, Fixed const &b);


	int getRawBits() const;
	void setRawBits(int const &val);
	float toFloat() const;
	int toInt() const;

private:
	int					_val;
	static const int	_fracBits;
};

	std::ostream & operator<<(std::ostream &out, Fixed const &f);

#endif
