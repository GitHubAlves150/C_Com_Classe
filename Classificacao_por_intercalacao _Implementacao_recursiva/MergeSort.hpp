
#ifndef MERGESORT_H
#define MERGESORT_H

class MergeSort
{
public:
    MergeSort( int );                       //Construtor inicializa vetor
    void sort();                            //classifica o vetor utilizando classificação por intercalação
    void displayElements()const;            //exibe elementos do vetor
private:
    int size;                               //tamanho do vetor
    vector<int>data                         //vetor de ints
    void sortSubvector(int, int);           //classifica o subvetor
    void merge(int , int, int, int);        //mescla os dois vetores classificados
    void displaySubVector(int, int)const;   //exibe o subvetor

};

#endif // MERGESORT_H
