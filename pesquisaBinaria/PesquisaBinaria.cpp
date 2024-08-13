#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <algorithm>
using std::sort;

#include "PesquisaBinaria.hpp"

//==================================================
//--Bibliotecas--
PesquisaBinaria::PesquisaBinaria(int sizeVec)
{
    _sizeVec = (sizeVec > 0 ? sizeVec : 2);

    for(int i=0 ; i<(_sizeVec/2) ; i++)//cria metade inicial do vetor
        dados.push_back(i+i/2);
    for(int i=(_sizeVec/2) ; i< sizeVec ; i++ )
        dados.push_back(i+i/2+i/3);

    sort(dados.begin(), dados.end());  //Organiza em ordem crescente

}// end cnt


int PesquisaBinaria::pesquisa(int chave)const
{

 int metadeIni = 0;                                    //metade inicial do vetor para pesquisa
 int metadeFim = _sizeVec-1;                           //metade final do vetor para pesquisa
 int centro    = (metadeIni + metadeFim + 1)/2;        //posição intermediária
 int indice    = -1;                                   //iindice retornado. Se não localizado, retorara -1

 while( (metadeIni <= metadeFim) && (indice ==-1) ) //algoritimo de pesquisa binaria
 {
    if(chave == dados[centro])
        indice = centro;
    else if(chave < dados[centro])
         metadeFim = centro-1;
    else
        metadeIni = centro+1;

    centro= (metadeIni + metadeFim+1)/2;

 }//end While

return indice;
}


void PesquisaBinaria::dispVec()const
{
    for(int i=0, cnt=0; i<=(_sizeVec-1) ; i++ )
    {
        cout << setw(8) << dados[i];
        cnt++;
        if(cnt >=20)
        {
            cout << '\n';
            cnt=0;
        }
        else
        {
            cout << "";
        }


    }//end dispVec
cout << endl;
}



























