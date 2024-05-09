
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstdlib> //Prtótipo para srand e rand
using std::rand;
using std::srand;

#include <ctime>  //Protótipo da função time para pegar o horário do computador
using std::time;

#include "MergeSort.hpp"


MergeSort::MergeSort( int vectorSize )                       //Construtor inicializa vetor
{
    size = vector > 0 ? vectorSize :10;     //se vector for maior que 0, então seja vectorSize senão seja 10
    srand(time(0));                         //semeia o gerador de numeros randomicos utilizando a hora atual

    //preenche o vetor de ints aleatórios no intervalo de 10-99;
    for(int i=0; i<size; i++)
    {
        data.push_back(10 + rand() % 90);   //O que isso tá fazendo?
    }

}//Fim do construtor MergeSort



void MergeSort::sort()                   //divide o vetor , classifica os subvetores e interala os subvetores nov etor classificado
{
    sortSubvector(0, size-1);            //classifica recursivamente o vetor inteiro

}
//  void displayElements()const;            //exibe elementos do vetor

//int size;                               //tamanho do vetor
// vector<int>data                         //vetor de ints
// void sortSubvector(int, int);           //classifica o subvetor
// void merge(int , int, int, int);        //mescla os dois vetores classificados
// void displaySubVector(int, int)const;   //exibe o subvetor
