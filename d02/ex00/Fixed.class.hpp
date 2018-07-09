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

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const & f);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const & val);
	Fixed & operator=(Fixed const & f);

private:
	int					_val;
	static const int	_fracBits;
};

#endif
