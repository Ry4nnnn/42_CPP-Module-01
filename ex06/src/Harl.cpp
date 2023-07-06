#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	static std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static void			(Harl::*function_list[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int index = 4;

	for (int i = 0; i < 4; i++)
	{
		if (level == level_list[i])
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*function_list[0])();
			std::cout << std::endl;

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*function_list[1])();
			std::cout << std::endl;
			
		case 2:
			std::cout << "[ WARNING ]" << std::endl;

			(this->*function_list[2])();
			std::cout << std::endl;

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*function_list[3])();
			std::cout << std::endl;

			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
