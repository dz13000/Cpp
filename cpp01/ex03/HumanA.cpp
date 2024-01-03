#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _Arme(club)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::string const &ref = this->_Arme.getType();
    std::cout << this->_name <<  " attacks with their ";
    std::cout << ref << std::endl;
}