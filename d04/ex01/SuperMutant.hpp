/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:34:47 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 20:57:01 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	~SuperMutant();
	SuperMutant & operator= (SuperMutant const & src);

	virtual void takeDamage(int dmg);
};

#endif
