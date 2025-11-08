#include <iostream>

using namespace std;

int main()
{
    int *head=nullptr;
    int node=nullptr;

    std::cout<< "Endereço de node: " << &node<< endl;


    head=&node;


    std::cout<< "Endereço de head: " << &head<< endl;
    std::cout<< "Endereço de head: " << &head<< endl;
    return 0;
}
