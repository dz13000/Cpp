#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void addContact(int index);
        void displayAllContact(void);
        void displayContact(void);

    private:
        int _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickNmae;
        std::string _darkest_Secret;
        std::string _number;

};

#endif