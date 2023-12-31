#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* Temp = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        Temp[i].modifName(name);
        Temp[i].announce();
        i++;
    }
    return(&Temp[0]);
}