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
        date.push_back(1+rand()%200);
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
    cout << "Vetor original.......\n";
    for(int i=0; i<_TAM; i++)
    {
        cout << date[i] << ":";

    }

    cout << endl << endl;
    cout << "Vetor da esquerda.......\n";
    for(int i=0; i<(_TAM/2); i++)
    {
        cout << vectorRigth[i] << ":";

    }
    cout << endl << endl;
    cout << "Vetor da direita.......\n";
    for(int i=0; i<(_TAM/2); i++)
    {
        cout << vectorLeft[i] << "-";

    }

}
