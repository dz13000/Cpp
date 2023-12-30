#include "Contact.hpp"
#include "main.hpp"
#include <iomanip>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

int check_number(std::string ligne)
{
    int i = 0;
    while (ligne[i])
    {
        if(std::isdigit(ligne[i]) == 0)
            return(1);
        i++;
    }
    return(0);
}

void Contact::addContact(int index)
{
    std::string ligne;
    this->_index = index;
    while (1)
    {
        std::cout << "Entrez le prenom : " << std::endl;
        std::getline(std::cin, ligne);
        if(ligne.empty())
        {
            std::cout << "C'est vide... " << std::endl;
            continue;
        }
        this->_firstName = ligne;
        break;
    }
    while (1)
    {
        std::cout << "Entrez le nom de famille : " << std::endl;
        std::getline(std::cin, ligne);
        if(ligne.empty())
        {
            std::cout << "C'est vide... " << std::endl;
            continue;
        }
        this->_lastName = ligne;
        break;
    }
    while (1)
    {
        std::cout << "Entrez le surnom : " << std::endl;
        std::getline(std::cin, ligne);
        if(ligne.empty())
        {
            std::cout << "C'est vide... " << std::endl;
            continue;
        }
        Contact::_nickNmae = ligne;
        break;
    }
    while (1)
    {
        std::cout << "Entrez le numero de telephone : " << std::endl;
        std::getline(std::cin, ligne);
        if(check_number(ligne) == 0)
        {
            this->_number = ligne;
            break;
        }
        else
            std::cout << "Mauvais format : merci de n'entrer que des chiffres\n";
    }
    while(1)
    {
        std::cout << "Entrez son plus lourd secret : " << std::endl;
        std::getline(std::cin, ligne);
        if(ligne.empty())
        {
            std::cout << "C'est vide... " << std::endl;
            continue;
        }
        this->_darkest_Secret = ligne;
        break;
    }
}

void  Contact::displayAllContact(void)
{
    std::cout << std::right;
    std::cout << this->_index << "|";
    if(this->_firstName.size() > 10)
    {
        this->_firstName.resize(9);
        std::cout << std::setw(10) << this->_firstName << '.' << "|";
    }
    else
        std::cout <<  std::setw(10) << this->_firstName << "|";
    if(this->_lastName.size() > 10)
    {
        this->_lastName.resize(9);
        std::cout <<  std::setw(10) << this->_lastName << '.' << "|";
    }
    else
        std::cout <<  std::setw(10) << this->_lastName << "|";
    if(this->_nickNmae.size() > 10)
    {
        this->_nickNmae.resize(9);
        std::cout <<  std::setw(10) << this->_nickNmae << '.' << std::endl;
    }
    else
        std::cout <<  std::setw(10) << this->_nickNmae << std::endl;
}

void    Contact::displayContact(void)
{
    std::cout << "Prenom : " << this->_firstName << std::endl;
    std::cout << "Nom de famille : " << this->_lastName << std::endl;
    std::cout << "Surnom : " << this->_nickNmae << std::endl;
    std::cout << "Tel. : " << this->_number << std::endl;
    std::cout << "Son secret : " << this->_darkest_Secret << std::endl;
}

