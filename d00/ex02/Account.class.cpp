/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:16:38 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/18 12:15:55 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static int callNumber = 0;

void	Account::_displayTimestamp( void )
{
	// get time now
	time_t t = time(0);
	tm *dateTimeNow = localtime( &t );
	char buf[80];
	strftime (buf, 80, "%Y%m%d_%H%M%S", dateTimeNow);
	std::cout << "[" << buf << "] ";
}

Account::Account( int initial_deposit )
{
	_accountIndex = Account::getNbAccounts();
	Account::_totalAmount += _amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";created\n";

	Account::_nbAccounts++;
}

Account::Account( void )
{
	_accountIndex = Account::getNbAccounts();
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";created\n";

	Account::_nbAccounts++;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:"<< Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  << "\n";
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";deposits:"<< _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << "\n";
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		Account::_totalNbDeposits++;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				  << ";p_amount:" << Account::checkAmount()
				  << ";deposit:"<< deposit;
		_nbDeposits++;
		_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << ";amount:" << Account::checkAmount()
				  << ";nb_deposits:"<< _nbDeposits
				  << "\n";
	}
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << Account::checkAmount()
			  << ";withdrawal:";
	if (0 > withdrawal || withdrawal > Account::checkAmount())
	{
		std::cout << "refused\n";
		return (false);
	}
	_nbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal
			  << ";amount:" << Account::checkAmount()
			  << ";nb_withdrawals:"<< _nbWithdrawals
			  << "\n";
	return (true);
}



int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	callNumber++;
	return (_amount);
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";closed\n";
	Account::_nbAccounts--;
}

