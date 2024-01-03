#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "DEBUG!!!!!!" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "INFO!!!!!!" << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "WARNING!!!!!!" << std::endl;
}
void    Harl::error(void)
{
    std::cout << "ERROR!!!!!!" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*choix[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;

    while(i < 4)
    {
        if(level == choice[i])
        {
            (this->*choix[i])();
            break;
        }
        i++;
    }
}