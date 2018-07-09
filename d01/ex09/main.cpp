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

#include <iostream>
#include "Logger.hpp"

int		main( int ac, char ** av )
{
	Logger log("myLogFile.txt");

	log.log("console", "heare we have some loooooooooooog!!!");
	log.log("file", "heare 22 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	return 0;
}
