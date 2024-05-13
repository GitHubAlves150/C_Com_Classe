#include "MergeSortByLucas.hpp"



VectorRandon::VectorRandon(int tam)
{
//empty
    _TAM=tam;
}





void VectorRandon::generateNumbersInvector()
{
    srand(time(0));
    for(int i=0; i<_TAM; i++)
    {
        date.push_back(10+rand()%20);
    }
//divide o vetor


    for(int i=0; i<(_TAM/2); i++)
    {
        vectorRigth.push_back(date[i]);
    }
    for(int i=(_TAM/2); i<_TAM; i++)
    {
        vectorLeft.push_back(date[i]);
    }



}



void VectorRandon::DisplayElementes()
{
    generateNumbersInvector();
    for(int i=0; i<_TAM; i++)
    {
        cout << date[i] << ":";

    }
    cout << endl;
    for(int i=0; i<(_TAM/2); i++)
    {
        cout << vectorRigth[i] << ":";

    }
    cout << endl;
    for(int i=0; i<(_TAM/2); i++)
    {
        cout << vectorLeft[i] << "-";

    }

}
