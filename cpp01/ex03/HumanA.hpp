#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class Weapon;

class  HumanA
{
    public:
        HumanA(std::string name, Weapon &club);
        ~HumanA();
        void    attack(void);

    private:
        std::string _name;
        Weapon &_Arme;
};

#endif