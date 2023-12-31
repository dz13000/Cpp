#include "Zombie.hpp"

Zombie::Zombie(void) 
{
}

Zombie::~Zombie(void)
{
    std::cout << "Le Zombie " << this->_name << " a ete detruit" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::modifName(std::string name)
{
    this->_name = name;
}

