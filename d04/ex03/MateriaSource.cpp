/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:59:37 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 21:05:56 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_iVol = 0;
	for(int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	cleanInv();
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src)
{
	cleanInv();
	_iVol = src.getIVol();

	if (_iVol > 0)
		for(int i = 0; i < _iVol; i++)
			_inv[i] = src.getMateria(i)->clone();
	return (*this);
}

void MateriaSource::cleanInv()
{
	for(int i = 0; i < _iVol; i++)
		delete(_inv[i]);
	_iVol = 0;
}

int MateriaSource::getIVol() const
{
	return (_iVol);
}

AMateria* MateriaSource::getMateria(int id) const
{
	if (0 <= id && id < _iVol)
		return (_inv[id]);
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_iVol < 4)
	{
		_inv[_iVol] = m->clone();
		_iVol++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (_iVol > 0)
		for(int i = 0; i < _iVol; i++)
			if(_inv[i]->getType() == type)
				return (_inv[i]->clone());
	return (NULL);
}

