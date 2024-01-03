#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_Arme = NULL;
}

HumanB::~HumanB()
{

}

void    HumanB::setWeapon(Weapon &club)
{
    this->_Arme = &club;
}
void    HumanB::attack(void)
{
    if(_Arme == NULL ||  _Arme->getType() == "")
    {
        std::cout << "No Weapon\n";
    }
    else 
    {
        std::cout << this->_name <<  " attacks with their";
        // std::string const &ref = _Arme->getType();
        std::cout << _Arme->getType() << std::endl;
    }
}
