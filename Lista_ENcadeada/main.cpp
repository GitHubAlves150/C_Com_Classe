#include <iostream>
#include "list.hpp"

int main()
{

    Node *A, *B, *C;

    A=new Node;

    A->dado=100;
    A->proximo=B;
    std::cout <<"Enderece de A........"<< static_cast<void*>(&A->dado) << std::endl;
    std::cout <<"Enderece de A........"<< static_cast<void*>(&A->proximo) << std::endl;
    A=new Node;

    A->dado=33;
    A->proximo=B;
    std::cout <<"Enderece de A........"<< static_cast<void*>(&A->dado) << std::endl;
    std::cout <<"Enderece de A........"<< static_cast<void*>(&A->proximo) << std::endl;


    return 0;
}
