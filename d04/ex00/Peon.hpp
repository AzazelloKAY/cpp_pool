/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:03:12 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 20:46:20 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
public:
	Peon();
	Peon(Peon const & src);
	Peon(std::string const & name);
	~Peon();
	Peon &operator= (Peon const & src);

	void getPolymorphed() const;
};

#endif
