/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void findAndReplace(std::string &src, std::string const &find, std::string const &repl)
{
	for(size_t i = 0; (i = src.find(find, i)) != std::string::npos;)
	{
		src.replace(i, find.length(), repl);
		i += repl.length();
	}
}

int		main( int ac, char ** av )
{
	if (ac < 4)
		return (0);
	std::string fName = av[1];
	std::string s1 = av[2];
	std::string	s2 = av[3];
	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(fName, std::ios::in);
	if(inFile.fail())
	{
		std::cout << "There were some errors during file opening\n";
		return (0);
	}
	outFile.open(fName + ".replace", std::ios::out);
    if(outFile.fail())
    {
        std::cout << "There were some errors during file opening\n";
		inFile.close();
        return (0);
    }

	std::string buf;
	while (!inFile.eof())
	{
		//getline(inFile, buf, (char)EOF);
		getline(inFile, buf);
		findAndReplace(buf, s1, s2);
		outFile << buf;
		if (!inFile.eof())
			outFile << "\n";
	}

	outFile.close();
	inFile.close();
	return 0;
}
