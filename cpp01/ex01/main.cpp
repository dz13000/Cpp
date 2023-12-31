#include "Zombie.hpp"

int main(void)
{
    Zombie* Temp = zombieHorde(10, "camil");
    delete []Temp;
}

