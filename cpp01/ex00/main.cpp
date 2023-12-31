#include "Zombie.hpp"

int main(void)
{
    randomChump("camil");
    Zombie* Moha = newZombie("Moha");
    Moha->announce();
    delete Moha;
}

