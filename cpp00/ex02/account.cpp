/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:08:07 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/28 15:51:35 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "created" << std::endl; 
}

Account::~Account()
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" <<  this->_amount << ";";
	std::cout << "closed" << std::endl; 
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

//===================== Display Accounts Infos	=================
void Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" <<  _totalAmount << ";";
	std::cout << "deposits:" <<  _totalNbDeposits << ";";
	std::cout << "withdrawals:" <<  _totalNbWithdrawals << std::endl;
}

//=====================		Make Deposit		=================
void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "nb_deposits:" <<  _nbDeposits << std::endl;
}

//=====================		Make Withdrawal		=================
bool	Account::makeWithdrawal( int withdrawal )
{
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		_nbWithdrawals--;
		_totalNbWithdrawals--;
		return (0);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount = _amount - withdrawal;
	_totalAmount = _totalAmount - withdrawal;
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "nb_withdrawals:" <<  _nbWithdrawals << std::endl;
	return (1);
}

//=====================		Check Amount		=================
int		Account::checkAmount( void ) const
{
	return (_amount);
}

//=====================		Display Status		=================
void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" <<  _nbWithdrawals << std::endl;
}