/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:34:24 by akokoshk          #+#    #+#             */
/*   Updated: 2018/05/31 21:09:30 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "string"

class Enemy
{
private:
	int _hp;
	std::string _type;

public:
	Enemy();
	Enemy(Enemy const & src);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();

	Enemy &operator = (Enemy const & src);
	void setHp(int hp);
	void setType(std::string const & type);

	std::string virtual getType() const;
	int getHP() const;
	virtual void takeDamage(int);

};

#endif
