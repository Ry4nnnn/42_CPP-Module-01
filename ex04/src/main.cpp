#include "sed.hpp"

int main(int ac, char **av)
{
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <string for replace> <string to replace>" << std::endl;
		return (EXIT_FAILURE);
	}
	Sed s(av[1], av[2], av[3]);
	s.openfile();
	return (0);
}
