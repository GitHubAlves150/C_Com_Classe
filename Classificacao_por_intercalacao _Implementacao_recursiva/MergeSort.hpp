
#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
using std::vector;

class MergeSort
{
public:
    MergeSort( int );                       //Construtor inicializa vetor
    void _sort();                            //classifica o vetor utilizando classificação por intercalação
    void displayElements()const;            //exibe elementos do vetor
private:
    int sizeVec;                               //tamanho do vetor
    vector<int>data;                        //vetor de ints
    void sortSubvector(int, int, char);           //classifica o subvetor
    void _merge(int , int, int, int);        //mescla os dois vetores classificados
    void displaySubVector(int, int)const;   //exibe o subvetor

};

#endif // MERGESORT_H
