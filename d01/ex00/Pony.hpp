/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
public:
	Pony (void);
	Pony (std::string newName, int newAge);
	~Pony(void);
	std::string getName() const;
	std::string setName(std::string newName);
	int getAge() const;
	int setAge(int n);

private:
	std::string _name;
	int 		_age;
};

#endif
