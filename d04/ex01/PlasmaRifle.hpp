/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:35:18 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 21:55:18 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle();

	PlasmaRifle & operator=(PlasmaRifle const & src);
	virtual void attack() const;

};

#endif
