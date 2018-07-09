/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:52:51 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/06 21:40:15 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include "string"

class AMateria
{
private:
	unsigned int xp_;
	std::string _type;

public:
	AMateria();
	AMateria(AMateria const & src);
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria &operator= (AMateria const & src);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia s XP
	virtual AMateria* clone() const = 0; //ABSTRAKT
	virtual void use(ICharacter& target);
	void riseXP();

	void setXP(int xp);
	void setType(std::string const & type);
};

#endif
