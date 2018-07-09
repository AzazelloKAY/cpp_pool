/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 21:30:28 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/25 22:48:08 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45)
{
	srand(time(0));
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):Form("RobotomyRequestForm", 72, 45)
{
	srand(time(0));
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	srand(time(0));
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(Form)*this = (Form)src;
	_target = src.getTarget();
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::action() const
{
	std::cout << "Ddrrrrrrrrrrrrrrzzshhshshshshshs..... " << _target
			  << (rand() % 2 > 0 ? " has been robotomized successfully\n" : "`s robotomizetion failure\n");
}

