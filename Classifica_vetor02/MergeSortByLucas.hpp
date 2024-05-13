
#ifndef RANDON_H
#define RANDON_H
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstdlib>
using std::srand;
using std::rand;

#include <ctime>
using std::time;

using namespace::std;

class VectorRandon
{
public:
    VectorRandon();//cnt com 10 elementos default

    void mergeSort(int vetor[], int auxiliar[], int tamanho);//vetor, auxili,tama
    void m_sort(int vetor[], int auxiliar[], int esq, int dir);//vetor, auxiliar, 0, tamanho
    void merge(int vetor[], int auxiliar[], int esq, int meio, int dir);
    void DisplayElementes();
private:



};

#endif // RANDON_H
