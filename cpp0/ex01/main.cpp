#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    std::string ligne;
    PhoneBook repertoire;
    std::cout << "Bienvenue dans votre repertoire" << std::endl;
    std::cout << "Vous pouvez enregistrer un nouveau contact avec la commande ADD ou bien afficher le contact demandé avec la commande SEARCH\n";
    std::cout << "Pour quitter le repertoire, entrez la commande EXIT" << std::endl;
    while (1)
    {
        std::cout << "Que souhaitez-vous faire : " << std::endl;
        std::getline(std::cin, ligne);
        if(ligne == "EXIT")
            exit(1);
        else if(ligne == "ADD")
        {
            repertoire.createRepertoire();
        }
        else if(ligne == "SEARCH")
        {
            repertoire.displayAllRepertoire();
            repertoire.displayRepertoire();
        }
        else
        {
            std::cout << "La commande n'existe pas\n";
        }
    }
}

