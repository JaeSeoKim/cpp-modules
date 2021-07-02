#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int	Account::_totalNbCheckAmount = 0;

Account::Account(void)
{
}

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	++Account::_nbAccounts;
	Account::_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts
			  << ";total:" << Account::_totalAmount
			  << ";deposits:" << Account::_totalNbDeposits
			  << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int Account::checkAmount(void) const
{
	++_totalNbCheckAmount;
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = _amount;

	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++Account::_totalNbDeposits;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	++Account::_totalNbWithdrawals;
	++_nbWithdrawals;
	std::cout << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void Account::_displayTimestamp(void)
{
	time_t now = time(nullptr);
	tm *now_tm = localtime(&now);

	std::cout << std::setfill('0')
			  << "[" << now_tm->tm_year + 1900
			  << std::setw(2) << now_tm->tm_mon + 1
			  << std::setw(2) << now_tm->tm_mday << "_"
			  << std::setw(2) << now_tm->tm_hour
			  << std::setw(2) << now_tm->tm_min
			  << std::setw(2) << now_tm->tm_sec
			  << "]";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}
