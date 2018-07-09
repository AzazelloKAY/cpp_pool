/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:01:15 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 19:47:09 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer();

public:
	Sorcerer(Sorcerer const & src);
	~Sorcerer();
	Sorcerer &operator= (Sorcerer const & src);

	Sorcerer(std::string const & name, std::string const & title);
	std::string getName() const;
	std::string getTitle() const;
	void setName(std::string const & name);
	void setTitle(std::string const & title);

	void polymorph(Victim const & v) const;

protected:
	std::string _name;
	std::string _title;

};

	std::ostream & operator<<(std::ostream &out, Sorcerer const & src);

#endif
