#ifndef SED_HPP
# define SED_HPP

#include <iostream>

class Sed
{
    private:
        char *_filename;
        char *_outfile;
        std::string _s1;
        std::string _s2;
    public:
        Sed(char *filename, char *s1, char *s2);
        void    openfile(void);
        ~Sed();
};

#endif