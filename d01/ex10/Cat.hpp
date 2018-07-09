/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>

class Cat
{
public:
	Cat();
	~Cat();
	static void file(std::string const &fname);
	static void console();

private:

};

#endif
