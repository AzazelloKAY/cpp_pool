/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:15:03 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/27 19:24:41 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base { public: virtual ~Base() {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	Base *res = NULL;
	int rnd = rand() % 3;
	if (rnd == 0)
	{
		res = new A();
		std::cout << "A class generated\n";
	}
	else if (rnd == 1)
	{
		res = new B();
		std::cout << "B class generated\n";
	}
	else
	{
		res = new C();
		std::cout << "C class generated\n";
	}
	return (res);
}

void identify_from_pointer(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "(pointer) We have an instanse of A class\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "(pointer) We have an instanse of B class\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "(pointer) We have an instanse of C class\n";
	else
		std::cout << "(pointer) We have an instanse of unknown class\n";
}


void identify_from_reference( Base & p )
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "(reference) We have an instanse of A class\n";
	}
	catch (...)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "(reference) We have an instanse of B class\n";
		}
		catch (...)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "(reference) We have an instanse of C class\n";
			}
			catch (...)
			{
				std::cout << "(reference) We have an instanse of unknown class\n";
			}
		}
	}

}

int main ()
{
	srand(time(0));

	Base *b = generate();

	identify_from_pointer(b);

	identify_from_reference(*b);
	
	delete (b);
	return (0);
}