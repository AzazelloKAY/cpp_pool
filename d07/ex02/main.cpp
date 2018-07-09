/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:19:38 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/28 22:07:10 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <iostream>

int main()
{
	srand(time(0));
	Array<int> arr(10);

	for(int i = 0; i < 10; i++)
		arr[i] = static_cast<unsigned int>(rand() % 999);

	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << "\n";

	Array<int> ar2;
	ar2 = arr;

	std::cout << "\narr2 after copy:\n";
	for (int i = 0; i < 10; i++)
		std::cout << ar2[i] << "\n";

	try
	{

		int t = ar2[50];
		std::cout << t <<"\n";
	}
	catch(std::exception &e)
	{
		std::cout << "\nTry to take access to non exist arr2 elem\n";
	}


}
