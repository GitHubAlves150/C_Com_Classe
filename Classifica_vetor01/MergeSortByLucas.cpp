#include "MergeSortByLucas.hpp"



VectorRandon::VectorRandon(int tam)
{
//empty
    _TAM=tam;
    _Auxiliar=tam;
    generateNumbersInvector();


    for(int i=0; i<tam; i++)
    {
        vectorAuxiliar[i]=0;
    }
}




void VectorRandon::generateNumbersInvector()
{
    srand(time(0));
    cout << "vetor original" << endl;
    for(int i=0; i<_TAM; i++)
    {
        date.push_back(1+rand()%200);
        cout << date[i]<< "..";
    }
    cout << endl;
}





//==============================================
//vetor da esquerda
void VectorRandon::divideVetorEsquerdo()
{
    //generateNumbersInvector();
    for(int i=0; i<(_Auxiliar/2); i++)
    {
        vectorLeft.push_back(date[i]);
    }
    while(_Auxiliar != 1)
    {
        _Auxiliar=_Auxiliar/2;
        for(int i=0; i<=_Auxiliar; i++)
        {

            cout << vectorLeft[i] << ".." ;
        }

        cout << endl;


    }

cout << endl;


}
//==============================================
//vetor da direita
void VectorRandon::divideVetorDireito()
{

    for(int i=(_TAM/2); i<_TAM; i++)
    {
        vectorRigth.push_back(date[i]);
    }

    while(_TAM != 1)
    {
        _TAM =_TAM/2;
        for(int i=1; i<_TAM; i++)
        {
            cout << vectorRigth[i] << ".." ;
        }
        cout << endl;

    }

}



void VectorRandon::DisplayElementes()
{
divideVetorEsquerdo();
    divideVetorDireito();

}
