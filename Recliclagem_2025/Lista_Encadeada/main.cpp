//
//Uma lista encadeada é o exercício perfeito para solidificar seu domínio sobre ponteiros e gerenciamento dinâmico de memória em C++.
//
//Exercicio de reciclagem sobre ponteiros-
//Estrutura de dados: Lista encadeada.
//Conceitos Chave Envolvidos
//---Ponteiros: Uso do * para referenciar o próximo nó e o início da lista.--
//---Alocação Dinâmica (new/delete): Gerenciamento manual da memória para criar e destruir nós.---
//---Design de Classes: Encapsular a lógica da lista em uma classe limpa.---

#include <iostream>

struct Node{
    int dado;
    Node *proximo;
};


using namespace std;

int main()
{

    Node n1, n2, n3;
    n1.dado=10;
    n1->proximo;
    n2.dado=20;
    n2->proximo;
    n3.dado=30;

    Node *atual= &n1;
    while(atual->proximo != nullptr)
    {
            atual->proximo;
            cout<<":.." << atual->dado << endl;

    }


    return 0;
}
