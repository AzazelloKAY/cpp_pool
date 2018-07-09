/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:04 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/18 13:15:55 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Fields.hpp"
#define string std::string
#define cout std::cout
#define cin std::cin


class PhoneBook
{
private:
	Fields	rec[8];
	int 	totalNum;
	int		curNum;
	void	print_index();
	void	print_fild(string f);
	string	get_field();

public:
	PhoneBook();
	~PhoneBook();
	void cmd_add();
	void cmd_search();
	void cmd_exit();
	static void eof_check();

};

#endif
