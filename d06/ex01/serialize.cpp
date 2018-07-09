/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:57:26 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/27 18:40:51 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};
//reinterpret_cast<void*>
void * serialize( void )
{
	srand(time(0));
	std::string templ = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned char* c = new unsigned char[20];
	for (int i = 0; i < 8; i++)
		c[i] = static_cast<unsigned char>(templ[rand() % 62]);

	int n = rand();
	unsigned char* tmp = reinterpret_cast<unsigned char*>(&n);
	for (int i = 0; i < 4; i++) //by defoult we take int 4b
		c[i + 8] = tmp[i];

	for (int i = 12; i < 20; i++)
		c[i] = static_cast<unsigned char>(templ[rand() % 62]);

	return((void*)c);
}

Data * deserialize(void * raw)
{
	Data *res = new Data;

	res->s1 = std::string(static_cast<char*>(raw)).substr(0, 8);
	res->s2 = std::string(static_cast<char*>(raw)).substr(12, 8);
	unsigned char* tmp = reinterpret_cast<unsigned char*>(&(res->n));
	for (int i = 0; i < 4; i++) //by defoult we take int 4b
		tmp[i] = (reinterpret_cast<unsigned char*>(raw))[i + 8];

	return (res);
}


int main (void)
{
	//serilize
	void * x = serialize();

	//raw print
	std::cout << "serelized view:\n";
	char * c = static_cast<char*>(x);
	for (int i  = 0; i < 20; i++)
		std::cout << c[i];
	std::cout << "\n";

	//deserilize
	Data *dat = deserialize(x);

	//print
	std::cout << ">s1: " << dat->s1 << "\n";
	std::cout << ">n: " << dat->n << "\n";
	std::cout << ">s2: " << dat->s2 << "\n";

	delete (dat);
	delete (static_cast<char*>(x));
	return (0);
}