/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human()
{
}

Human::~Human()
{
}

void Human::meleeAttack(std::string const &target)
{
	std::cout << "We attacking a " << target << " with melee\n";
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "We attacking a " << target << " by ranged attack\n";
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "We intimidate a " << target << " by shout\n";
}

void Human::action(std::string const &action_name, std::string const &target)
{
	std::string actName[3] = {"melee", "ranged", "shout"};
	void (Human::*actionArr[3])(std::string const &) =
		{
			&Human::meleeAttack,
			&Human::rangedAttack,
			&Human::intimidatingShout
		};

	for(int i = 0; i < 3; i++)
		if(actName[i] == action_name)
			(this->*actionArr[i])(target);
}