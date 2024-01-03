#include "main.hpp"


int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::ifstream filname(av[1]);
        std::string str = ".replace";
        std::string intpout(av[1]);
        std::string s1(av[2]);
        std::string s2(av[3]);
        size_t pos = 0;
        size_t posend = 0;

        if(filname.is_open() == false)
            return(std::cout << "Erreur lors de l'ouverture du fichier\n", 1);

        std::ofstream filename2(intpout + str);
        if(filename2.is_open() == false)
            return(std::cout << "Erreur lors de la creation du fichier du fichier\n", filname.close(),  1);
        
        std::string ok;
        std::string ok2;
        getline(filname, ok);
        while(filname.eof() == false)
        {
            getline(filname, ok2);
            ok += '\n' + ok2;
        }
        posend = ok.rfind(s1);
        while(pos <= posend)
        {
            pos = ok.find(s1, pos);
            if(pos != std::string::npos)
            {
                    ok.erase(pos, s1.length());
                    ok.insert(pos, s2);
                    pos += s2.length();
            }
        }
        filename2 << ok;
        filname.close();
        filename2.close();
    }
    else
        return (std::cerr << "Nombre d'arguments incorrect\n", 1);
}