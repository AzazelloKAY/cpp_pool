/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 20:16:08 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/04 20:27:29 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"

Squad::Squad()
{
	_cnt = 0;
	first_f = NULL;
	last_f = NULL;
}

Squad::~Squad()
{
	squadClear();
}

int Squad::getCount() const
{
	return (_cnt);
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad & Squad::operator=(Squad const &src)
{
	squadClear();

	for(int i = 0; i < src.getCount(); i++)
		_cnt = push(src.getUnit(i)->clone());

	return (*this);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (0 == _cnt || _cnt < n || n < 0)
		return (NULL);
	t_fighters *cur = first_f;

	for (int i = 0; (i < n && cur != NULL); i++)
		cur = cur->next;

	return (cur->unit);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL || getUnitPosition(unit) > 0)
		return (_cnt);
	t_fighters *newUnit;
	try
	{
		newUnit = new t_fighters;
	}
	catch (std::bad_alloc&)
	{
		return (_cnt);
	}
	_cnt++;
	newUnit->unit = unit;
	newUnit->prev = last_f;
	newUnit->next = NULL;
	if (last_f == NULL)
	{
		first_f = newUnit;
		last_f = first_f;
	}
	else
	{
		last_f->next = newUnit;
		last_f = last_f->next;
	}

	return (_cnt);
}

int Squad::getUnitPosition(ISpaceMarine *unit) const
{
	t_fighters *cur = first_f;
	int i = -1;
	while (cur != NULL)
	{
		i++;
		if (cur->unit == unit)
			return (i + 1);
		cur = cur->next;
	}
	return (-1);
}

void Squad::squadClear()
{
	while (first_f != NULL)
	{
		if (first_f->unit != NULL)
			delete(first_f->unit);
		t_fighters *next = first_f->next;
		delete(first_f);
		first_f = next;
	}
	last_f = NULL;
	_cnt = 0;
}