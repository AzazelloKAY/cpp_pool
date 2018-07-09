/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:24:09 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/29 16:22:50 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main()
{
	std::list<int> vv;
	vv.push_back(5);
	vv.push_back(10);
	vv.push_back(50);
	vv.push_back(500);


	try
	{
		size_t place = easyfind(vv, 10);
		std::cout << "list >> The elemeint is on the " << place << " plase\n";
	}
	catch(std::exception &e)
	{
		std::cout << "list >> There is no such elemeint in sequence\n";
	}
	try
	{
		size_t place = easyfind(vv, 5000);
		std::cout << "list >> The elemeint is on the " << place << " plase\n";
	}
	catch(std::exception &e)
	{
		std::cout << "list >> There is no such elemeint in sequence\n";
	}


	std::vector<int> ar (2, 5);
	ar.push_back(8);
	ar.push_back(20);
	ar.push_back(45);
	try
	{
		size_t place = easyfind(ar, 20);
		std::cout << "vector >> The elemeint is on the " << place << " plase\n";
	}
	catch(std::exception &e)
	{
		std::cout << "vector >> There is no such elemeint in sequence\n";
	}
	try
	{
		size_t place = easyfind(ar, 10);
		std::cout << "vector >> The elemeint is on the " << place << " plase\n";
	}
	catch(std::exception &e)
	{
		std::cout << "vector >> There is no such elemeint in sequence\n";
	}


return(0);

}
