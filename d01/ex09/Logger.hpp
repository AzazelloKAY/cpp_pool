/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:12:45 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/19 19:19:47 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
public:
	Logger();
	Logger(std::string const &fName);
	~Logger();
	void log(std::string const & dest, std::string const & message);

private:
	void logToConsole(std::string const &s);
	void logToFile(std::string const &s);
	std::string	get_curTime();
	std::string makeLogEntry(std::string const &s);
	std::string _fname;


};

#endif
