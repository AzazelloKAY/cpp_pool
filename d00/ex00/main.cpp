/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/18 13:12:45 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define cout std::cout
#define cin std::cin
#define endl std::endl
#define eof std::eof

int main(int ac, char** av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			char *s = av[i];
			while (*s)
			{
				if (islower(*s))
					*s = toupper(*s);
				s++;
			}
			cout << av[i];
		}
		cout << "\n";
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
