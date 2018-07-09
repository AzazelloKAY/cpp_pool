/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:13:18 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/28 18:11:59 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T &))
{
	for(size_t i = 0; i < len; i++)
		f(arr[i]);
};

template <typename T>
void print_some(T &x)
{
	std::cout << x << "\n";
}

int main()
{
	std::string c[] = {"abc", "cde", "finita", "was", "here"};
	int i[] = {123, 321, 546, 7657, 8769, 9999};

	std::cout << "string iter:\n";
	iter(c, 5, print_some);

	std::cout << "\nint iter:\n";
	iter(i, 6, print_some);

return (0);

};