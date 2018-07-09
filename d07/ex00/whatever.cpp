/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:56:36 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/28 15:28:48 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename Tmpl>
void swap(Tmpl& a, Tmpl& b)
{
	Tmpl tmp = a;
	a = b;
	b = tmp;
}

template <typename Tmpl>
Tmpl const & min(Tmpl const & a, Tmpl const & b)
{
	return((a < b) ? a : b);
}

template <typename Tmpl>
Tmpl const & max(Tmpl const & a, Tmpl const & b)
{
	return((a > b) ? a : b);
}

int main()
{
	int a = 50;
	int b = 60;
	std::cout << "a: " << a << " b: " << b << "\n";
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << "\n";
	std::cout << "min: " << min(a, b) << "\n";
	std::cout << "max: " << max(a, b) << "\n";


	double da = 50.298;
	double db = 50.456;
	std::cout << "da: " << da << " db: " << db << "\n";
	swap(da, db);
	std::cout << "da: " << da << " db: " << db << "\n";
	std::cout << "min: " << min(da, db) << "\n";
	std::cout << "max: " << max(da, db) << "\n";
	
	return (0);
}


