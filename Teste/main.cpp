#include <iostream>

int main()
{



    char *menu[]= {"nome", "endereço", "rua"};
    char *nomeCompleto= "Lucas Lorenço Alves";
    std::cout<< ": " << menu[1]<< std::endl;
    std::cout<< ": " << &nomeCompleto+1<< std::endl;
    std::cout<< ": " << &nomeCompleto<< std::endl;
    menu[1]="alves";
    std::cout<< ": " << menu[1]<< std::endl;
    std::cout<< ": " << menu[0]<< std::endl;
    std::cout<< ": " << menu[2]<< std::endl;
    nomeCompleto="nenhum de nos";
    std::cout<< ": " << nomeCompleto<< std::endl;

    return 0;
}


