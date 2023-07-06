#include "Harl.hpp"

int main(int ac, char **av)
{
	static std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	input_level;
	Harl	harl;
	int	level = 4;
	int	i;

	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter [Level]" << std::endl;
		return (EXIT_FAILURE);
	}
	input_level = av[1];
	while (i < 4)
	{
		if (input_level == level_list[i])
		{
			level = i;
			break ;
		}
		i++;
	}
	switch (level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(input_level);
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(input_level);
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(input_level);
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(input_level);
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}