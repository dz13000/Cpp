#include <iostream>

int main(int ac, char **av)
{
    if(ac != 1)
    {
        int i = 1;
        int j = 0;
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << '\n';
    }
    else 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
}