//
//  Classe PesquisaBinaria
//  Arquivo .cpp
//  Dr. Eng. Wagner Rambo, outubro de 2022
//


// ==============================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::sort;

#include <iomanip>
using std::setw;

#include "PesquisaBinaria.hpp"


// ==============================================
// --- Bibliotecas ---
PesquisaBinaria::PesquisaBinaria(int sizeVec)
{
  _sizeVec = (sizeVec > 0 ? sizeVec : 2);

  for(int i=0; i<(_sizeVec/2); i++)         //cria metade inicial do vetor
    dados.push_back(i+i/2);
  for(int i=(_sizeVec/2); i<_sizeVec; i++)  //cria metade final do vetor
    dados.push_back(i+i/2+i/3);

  sort(dados.begin(), dados.end());         //organiza em ordem crescente

} //end constructor


// ==============================================
// --- Função para Pesquisa Binária em Vetor ---
int PesquisaBinaria::pesquisa(int chave) const
{
  int metadeIni = 0;                             //metade inicial do vetor para pesquisa
  int metadeFim = _sizeVec-1;                    //metade final do vetor para pesquisa
  int centro = (metadeIni+metadeFim+1)/2;        //posição intermediária
  int indice = -1;                               //indice retornado. Se não localizado, retornará -1

  while((metadeIni<=metadeFim)&&(indice==-1))    //algoritmo de pesquisa binária
  {

     if(chave == dados[centro])
       indice = centro;
     else if(chave < dados[centro])
       metadeFim = centro-1;
     else
       metadeIni = centro+1;

     centro = (metadeIni+metadeFim+1)/2;

  } //end while

  return indice;

} //end pesquisa


// ==============================================
// --- Imprime conteúdo do Vetor ---
void PesquisaBinaria::dispVec() const
{
  for(int i=0, cnt=0; i<=(_sizeVec-1); i++)
  {
    cout << setw(4) << dados[i];
    cnt++;

    if(cnt>19)
    {
      cout << '\n';
      cnt=0;
    }
    else
      cout << ' ';

  } //end for

  cout << endl;

} //end dispVec











// ==============================================
// --- Fim. ---
