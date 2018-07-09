/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:59:10 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/27 12:38:29 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
//#include <climits>
#include <cfloat>

int main(int ac, char**av)
{
	double d;

	if (ac == 2)
	{
		std::string str(av[1]);
		unsigned long strLen = str.length();
		if (strLen == 1 && isprint(str[0]) && !isdigit(str[0])) //if single char
		{
			std::cout << "char: '" << static_cast<char>(str[0]) <<"'\n";
			std::cout << "int: " << static_cast<int>(str[0]) <<"\n";
			std::cout << "float: " << static_cast<float>(str[0]) <<".0f\n";
			std::cout << "double: " << static_cast<double>(str[0]) << ".0\n";
			return (0);
		}
		if ((strLen > 1 && str[strLen - 2] != 'n' && str[strLen - 1] == 'f')
			|| (strLen > 3 && str.compare(strLen - 4, 4,"nanf") == 0))//0.42f
			str.resize(strLen - 1);

		std::stringstream strs(str);
		strs >> d; //read to double

		//char
		if (str == "nan" || d < 0 || CHAR_MAX < d || !strs.eof() || strs.fail())
			std::cout << "char: imposible\n";
		else if (isprint(d))
			std::cout << "char: '" << static_cast<char>(d) << "'\n";
		else
			std::cout << "char: non displayeble" << std::endl;
		//int
		if (str == "nan" || !strs.eof() || strs.fail())
			std::cout << "int: imposible\n";
		else if (d < INT_MIN || INT_MAX < d)
			std::cout << "int: imposible\n";
		else
			std::cout << "int: "<< static_cast<int>(d) << "\n";
		//float
		if (((d < -FLT_MAX || FLT_MAX < d) && !std::isinf(d))
			|| !strs.eof()
			|| strs.fail())
			std::cout << "float: imposible\n";
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
		//dbl
		if (!strs.eof() || strs.fail())
			std::cout << "double: imposible\n";
		else
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << "\n";
	}
	else
		std::cout << "Need only one argument\n";


	return (0);
}
