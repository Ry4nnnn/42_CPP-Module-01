#include <iostream>
#include <fstream>
#include <string>

static int replace_text(std::string file_name, std::string find, std::string replace)
{
	std::ifstream	infile(file_name);
	std::ofstream	outfile(file_name + ".replace");
	std::string		buffer;
	std::string::size_type		pos;
	std::string::size_type		start_pos;
	int				stop;
	
	if (!outfile)
	{
		std::cerr << file_name + ".replace cannot be created" << std::endl;
		return (EXIT_FAILURE);
	}
	if (!infile)
	{
		remove ((file_name + ".replace").c_str());
		std::cerr << file_name + "cannot be opened" << std::endl;
		return (EXIT_FAILURE);
	}
	while (1)
	{
		start_pos  = 0;
		stop = getline(infile, buffer).eof();
		pos = buffer.find(find, start_pos);
		while (pos != std::string::npos)
		{
			buffer.erase(pos, find.length());
			buffer.insert(pos, replace);
			start_pos = pos + replace.length();
			pos = buffer.find(find, start_pos);
		}
		outfile << buffer;
		if (stop)
			break;
		outfile << std::endl;
	}
	return (0);
}

int main(int ac, char **av)
{
	std::string file_name;

	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <filename> <string for replace> <string to replace>" << std::endl;
		return (EXIT_FAILURE);
	}
	if (av[2][0] == '\0')
	{
		std::cerr << "String is empty" << std::endl;
		return (EXIT_FAILURE);
	}
	file_name = av[1];
	replace_text(file_name, std::string(av[2]), std::string(av[3]));
	return (0);
}
