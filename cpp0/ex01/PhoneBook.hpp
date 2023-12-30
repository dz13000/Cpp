#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"
#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    createRepertoire(void);
        void    displayAllRepertoire(void);
        void    displayRepertoire(void);

    private:
        Contact _repertoire[9];
        int _index;
        int _new_index;
        int _ct;
        
};

#endif