#include <iostream>
using namespace std;

#include "PesquisaBinaria.hpp"

int main()
{
    cout << "Hello REEA!" << endl;
    int minhaChave;                 //chave a ser pesquisada no vetor
    int indice;                     //localização da chave no vetor
    int tamanho;                    //tamanho do vetor a segerado



    cout << "\n Informe o numero de elementos do vetor: ";
    cin  >> tamanho;

     PesquisaBinaria myVector(tamanho);

     myVector.dispVec();

     while(1)
     {
        cout << "\n Encontre com o valor da chave para pesquisar no vetor: ";
        cin  >> minhaChave;
        cout << endl;

        indice = myVector.pesquisa(minhaChave);

        if(indice != -1)
            cout << " Chave pesquisada " << minhaChave
                 << " no indice " << indice << endl;
        else
            cout << " Chave pesquisada " << minhaChave
                 << " inexistente. " << endl;

     }//end while


    cout << "\n\n Fim." << endl;
    while(1);



    return 0;
}




