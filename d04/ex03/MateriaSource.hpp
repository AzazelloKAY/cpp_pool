/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:04:00 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 20:59:28 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_inv[4];
	int _iVol;
	void cleanInv();

public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	~MateriaSource();
	MateriaSource &operator= (MateriaSource const &);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	int getIVol() const;
	AMateria *getMateria(int) const;
};

#endif
