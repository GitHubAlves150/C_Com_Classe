#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
using std::vector;


//============================
//--class--
class PesquisaBinaria
{
public:
    //cnt
    PesquisaBinaria(int sizevec);


    int pesquisa(int chave)const; //faz pesquisa binaria e gera o indice da chave encoontrada
    void dispVec()const; //imprime o conteudo do vetor

private:
    int _sizeVec;       //Armazena o tamanho do vetor
    vector<int> dados;   //declara um vetor de inteiros

};//end class


#endif // SEARCH_H
