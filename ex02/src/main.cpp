#include <string>
#include <iostream>

int main()
{
	//variable
	std::string str = "HI THIS IS BRAIN";
	//pointer
	std::string *stringPTR = &str;
	//reference
	std::string &stringREF = str;

	std::cout << "Variable: " << str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}