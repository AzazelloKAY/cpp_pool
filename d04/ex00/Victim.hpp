/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:02:28 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/29 20:56:56 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim
{
public:
	Victim();
	Victim(Victim const & src);
	~Victim();
	Victim &operator= (Victim const & src);

	Victim(std::string const & name);
	std::string getName() const;
	void setName(std::string const & name);

	virtual void getPolymorphed() const;

protected:
	std::string _name;

};

std::ostream & operator<<(std::ostream &out, Victim const & src);

#endif