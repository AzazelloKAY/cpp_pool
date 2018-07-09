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
	int getRawBits() const;
	Fixed & operator=(Fixed const & f);
	void setRawBits(int const & val);
	float toFloat() const;
	int toInt() const;

private:
	int					_val;
	static const int	_fracBits;
};

	std::ostream & operator<<(std::ostream & out, Fixed const & f);

#endif
