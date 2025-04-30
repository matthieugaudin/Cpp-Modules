#include "Account.hpp"
#include <iostream>
#include <ctime>

int	_nbAccouts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

	Account::_nbAccounts++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += initial_deposit;

	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created";
	std::cout << std::endl;

	return ;

}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed";
	std::cout << std::endl;

	return ;
}

void	Account::makeDeposit( int deposit ) {

	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	return ;

}

int		Account::checkAmount( void ) const {
	
	return (this->_amount);

}

bool	Account::makeWithdrawal( int withdrawal ) {

	if (withdrawal > this->checkAmount()) {

		return (false);

	} else {

		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
	
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;

	}

	return ;

}

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);

}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);

}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);

}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);

}

void	Account::_displayTimestamp( void ) {

	time_t	timestamp;

	time(&timestamp);
	std::cout << ctime(&timestamp);

	return ;

}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return ;

}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;

	for (int i = 0; i < Account::_nbAccounts; i++) {
		
	}

	return ;

}

// ACCOUT CREATION
// [19920104_091532] index:0;amount:42;created
// [19920104_091532] index:1;amount:54;created
// [19920104_091532] index:2;amount:957;created


// ACCOUNTS INFOS
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// 19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
// [19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
// [19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
// ...


// ACCOUNT DELETION
// [19920104_091532] index:0;amount:47;closed
// [19920104_091532] index:1;amount:785;closed
// [19920104_091532] index:2;amount:864;closed
