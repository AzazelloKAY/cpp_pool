/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:17:09 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/23 21:58:52 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	NinjaTrap &operator= (NinjaTrap const & targ);

	void ninjaUniShoebox(ClapTrap const & clap);

	void ninjaShoebox(ClapTrap & clap);
	void ninjaShoebox(NinjaTrap & clap);
	void ninjaShoebox(FragTrap & clap);
	void ninjaShoebox(ScavTrap & clap);

};

#endif
