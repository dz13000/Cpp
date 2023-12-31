#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie Temp = Zombie(name);
    Temp.announce();
}

