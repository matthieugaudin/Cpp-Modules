#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t levelsLenght = sizeof(levels) / sizeof(levels[0]);
	void	(Harl::*funcTab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	bool	levelExist = false;
	for (size_t i = 0; i < levelsLenght; i++)
	{
		if(level == levels[i])
		{
			levelExist = true;
			while (i < levelsLenght)
			{
				std::cout << "[ " << levels[i] << " ]" << std::endl;
				(this->*funcTab[i])();
				std::cout << std::endl;
				i++;
			}
		}
	}
	if (!levelExist) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}

// use a switch case