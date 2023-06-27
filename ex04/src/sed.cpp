#include "sed.hpp"

Sed::Sed(char *filename, char *s1, char *s2)
{
    std::string str1(s1);
    std::string str2(s2);
    _filename = filename;
    _s1 = str1;
    _s2 = str2;
}

void Sed::openfile(void) {
    std::string file_str;
    std::ifstream file(_filename);

assaaaaaaaaaaaaaasaaaassaaaaaaaaaaaaaa
    if (!file)
    {
        std::cerr << "ERROR Opening File." << std::endl;
    }
}

Sed::~Sed() {
    return ;
}