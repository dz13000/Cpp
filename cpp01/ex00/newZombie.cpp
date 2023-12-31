#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* Temp = new Zombie(name);
    return (Temp);
}