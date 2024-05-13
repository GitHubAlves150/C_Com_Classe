/*
classificação
*/
#include <iostream>
using std::cout;
using std::endl;

#include "MergeSortByLucas.hpp"


void intercala(int p, int q, int r, int vetor[]);
void mergesort(int p, int q, int vetor[]);

int main()
{
    cout << "Hello REAA!" << endl;

    int vetor[10]= {10, 22, 3, 4, 43, 56, 88, 1, 21, 9};
    int vetor_auxi[]= {0};
    mergesort(0, 10, vetor);

    for(int i=0; i<10; i++)//vare do inicio ao fim
    {
        //vetor[i] = aux[i-p];
        cout << vetor[i] << ".." ;

    }









    return 0;
}


void intercala(int p, int q, int r, int vetor[])
{

    int i=p,//inicio
        j=q,//meio
        k=0,//indice
        aux[10];
    while(i < q && j < r)//enquanto o inicio for menor que o meio e o meio for menor que o fim
    {
        if(vetor[i] < vetor[j])
        {
            aux[k] = vetor[i];
            i++;
        }

        else
        {
            aux[k]=vetor[j];
            j++;
        }
        k++;//indice auxiliar(k) para vetor auxiliar
    }

    while(i < q)//enquanto o inicio for menor que o meio
    {

        aux[k]= vetor[i];
        i++;//para vetor do inicio ao meio usa o indice do inicio
        k++;//indice auxiliar(k) para vetor auxiliar
    }
    while(j < r)//enquanto meio for menor que o fim
    {
        aux[k]= vetor[j];
        j++;//para vetor do meio ao fim usa o indice do meio
        k++;//indice auxiliar(k) para vetor auxiliar
    }
    for(i=p; i<r; i++)//vare do inicio ao fim
    {
        vetor[i] = aux[i-p];
        //cout << vetor[i] << ".." ;

    }
    cout << endl;


}




void mergesort(int p, int r, int vetor[])
{
    int q;

    if( p < r-1 )
    {
        q = (p+r )/2;
        mergesort(p, q, vetor);
        mergesort(q, r, vetor);
        intercala(p, q, r, vetor);

    }
}



























