#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class Weapon;

class  HumanB
{
    private:
        std::string _name;
        Weapon *_Arme;

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &Club);
        void    attack(void);

};

#endif