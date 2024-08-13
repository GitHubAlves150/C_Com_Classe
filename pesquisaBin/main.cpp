//
//  Módulo 11, Aula 1
//  Algoritmo para pesquisa binária em vetores
//
//  Dr. Eng. Wagner Rambo, outubro de 2022
//


// ==============================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "PesquisaBinaria.hpp"


// ==============================================
// --- Função Principal ---
int main()
{
  int minhaChave;  //chave a ser pesquisada no vetor
  int indice;      //localização da chave no vetor
  int tamanho;     //tamanho do vetor a ser gerado

  cout << "\n Informe o numero de elementos do vetor: ";
  cin  >> tamanho;

  PesquisaBinaria  myVector(tamanho);
  myVector.dispVec();

  while(1)
  {
    cout << "\n Entre com o valor da chave para pesquisar no vetor: ";
    cin  >> minhaChave;
    cout << endl;

    indice = myVector.pesquisa(minhaChave);

    if(indice != -1)
      cout << " Chave pesquisada " << minhaChave
           << " no indice " << indice << endl;
    else
      cout << " Chave pesquisada " << minhaChave
           << " inexistente." << endl;

  } //end while


  cout << "\n\n Fim." << endl;
  while(1);
  return 0;
} //end main







// ==============================================
// --- Fim. ---
