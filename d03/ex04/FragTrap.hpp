/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:08:17 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:19:36 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap &operator=(FragTrap const & src);

	void vaulthunter_dot_exe(std::string const & target);

	static int _ftMaxHp;
	static int _ftMaxEp;
	static int _ftMeleeDmg;
	static int _ftRangeDmg;
	static int _ftArmor;

};

#endif