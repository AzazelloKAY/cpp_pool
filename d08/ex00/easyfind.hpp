/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:21:32 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/29 16:20:32 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
//#include <vector>

template <typename T>
size_t easyfind(T &lst, int num)
{
	typename T::iterator ptr;
	size_t i = 0;
	for (ptr = lst.begin(); ptr != lst.end(); ptr++)
	{
		if (*ptr == num)
			return i;
		i++;
	}
	throw (std::exception());
}


#endif
