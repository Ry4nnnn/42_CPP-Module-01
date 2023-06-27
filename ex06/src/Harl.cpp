#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void	Harl::debug(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
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
	static std::string	complain_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static void			(Harl::*function_list[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	void				(Harl::*selected)(void) = NULL;
	int					i = 0;

	while (i < 4)
	{
		if (level == complain_list[i])
		{
			selected = function_list[i];
			break ;
		}
		i++;
	}
	if (selected != NULL)
		(this->*selected)();
}
