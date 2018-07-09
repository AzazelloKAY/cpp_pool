/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 20:16:16 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/03 18:33:24 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	typedef struct s_fighters
	{
		struct s_fighters *next;
		struct s_fighters *prev;
		ISpaceMarine *unit;
	}				t_fighters;

protected:
	int _cnt;
	t_fighters *first_f, *last_f;


public:
	Squad();
	Squad(Squad const &);
	~Squad();
	Squad & operator=(Squad const &);

	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);

	void squadClear();
	int getUnitPosition(ISpaceMarine *) const;
};

#endif
