/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:17:09 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/28 20:18:43 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	NinjaTrap &operator= (NinjaTrap const & targ);

	void ninjaUniShoebox(ClapTrap const & clap);

	void ninjaShoebox(ClapTrap & clap);
	void ninjaShoebox(NinjaTrap & clap);
	void ninjaShoebox(FragTrap & clap);
	void ninjaShoebox(ScavTrap & clap);

	static int _ntMaxHp;
	static int _ntMaxEp;
	static int _ntMeleeDmg;
	static int _ntRangeDmg;
	static int _ntArmor;


};

#endif
