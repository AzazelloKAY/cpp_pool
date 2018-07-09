/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:02:32 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 21:20:46 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	AMateria *_inv[4];
	std::string _name;
	int _iVol;
	void cleanInv();

public:
	Character();
	Character(Character const &);
	Character(std::string const &);
	~Character();

	Character &operator=(Character const &);

	std::string const & getName() const;
	void setName(std::string const &);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	AMateria *getMateria(int) const;
	int getIVol() const;
};

#endif
