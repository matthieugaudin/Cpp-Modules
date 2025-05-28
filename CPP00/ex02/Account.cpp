#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	this->_accountIndex = 	Account::_nbAccounts - 1;
	this->_amount = initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "created";
	std::cout << std::endl;
	
	return ;

}

Account::~Account( void ) {
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "closed";
	std::cout << std::endl;
	
	return ;
}

int		Account::checkAmount( void ) const {
	
	return (this->_amount);

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

void	Account::makeDeposit( int deposit ) {

	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

	return ;

}

bool	Account::makeWithdrawal( int withdrawal ) {
	
	int	p_amount;
	
	p_amount = Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "withdrawal:";
	
	if (withdrawal > this->checkAmount()) {
		
		std::cout << "refused" << std::endl;
		return (false);
		
	} else {
		
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		
		std::cout << withdrawal << ";";
		std::cout << "amount:" << this->checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
	
		return (true);
	}
}


void	Account::_displayTimestamp( void ) {

	time_t	now;
	tm		*curr_time;

	now = time(NULL);
	curr_time = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + curr_time->tm_year;
	if (curr_time->tm_mon <= 9)
		std::cout << "0" << curr_time->tm_mon;
	else
		std::cout << curr_time->tm_mon;
	if (curr_time->tm_mday <= 9)
		std::cout << "0" << curr_time->tm_mday;
	else
		std::cout << curr_time->tm_mday;

	std::cout << "_";

	if (curr_time->tm_hour <= 9)
		std::cout << "0" << curr_time->tm_hour;
	else
		std::cout << curr_time->tm_hour;
	if (curr_time->tm_min <= 9)
		std::cout << "0" << curr_time->tm_min;
	else
		std::cout << curr_time->tm_min;
	if (curr_time->tm_sec <= 9)
		std::cout << "0" << curr_time->tm_sec;
	else
		std::cout << curr_time->tm_sec;
	std::cout << "] ";

	return ;

}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return ;

}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;

	return ;

}
