#include "PhoneBook.hpp"
#include "main.hpp"

PhoneBook::PhoneBook(void) : _index(1), _new_index(1), _ct(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::createRepertoire(void)
{
    if(this->_index > 8)
    {
        this->_index = 1;
        this->_ct++;
    }
    this->_repertoire[_index].addContact(_index);
    this->_index++;
    if(this->_ct == 0)
        this->_new_index = this->_index;
}

void    PhoneBook::displayAllRepertoire(void)
{
    int i = 1;
    while (i < this->_new_index)
    {
        this->_repertoire[i].displayAllContact();
        i++;
    }
}

void    PhoneBook::displayRepertoire(void)
{
    int index;
    std::string num;
    while(1)
    {
        std::cout << "Entrez l'index du contact à afficher : " << std::endl;
        std::getline(std::cin, num);
        if(num.size() > 1 || std::isdigit(num[0]) == 0)
            std::cout << "Mauvais format : merci de n'entrer qu'un chiffre\n";
        else
        {
            index = std::stoi(num);
            if(index > this->_new_index - 1)
            {
                std::cout << "L'index de ce contact n'existe pas\n";
                continue;
            }
            break;
        }
    }
    this->_repertoire[index].displayContact();
}
