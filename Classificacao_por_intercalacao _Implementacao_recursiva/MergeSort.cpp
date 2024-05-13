
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
using namespace::std;

MergeSort::MergeSort( int vectorSize )                       //Construtor inicializa vetor
{
    sizeVec = (vectorSize > 0 ? vectorSize :10);     //se vector for maior que 0, então seja vectorSize senão seja 10
                                                  //Valida vectorSize
    srand(time(0));                               //semeia o gerador de numeros randomicos utilizando a hora atual

    //preenche o vetor de ints aleatórios no intervalo de 10-99;
    for(int i=0; i<sizeVec; i++)
    {
        data.push_back(10 + rand() % 90);   //O que isso tá fazendo?
    }

}//Fim do construtor MergeSort



void MergeSort::_sort()                   //divide o vetor , classifica os subvetores e interala os subvetores nov etor classificado
{
    sortSubvector(0, sizeVec-1, 'a');            //classifica recursivamente o vetor inteiro

}//fim da função sort

void MergeSort::sortSubvector(int low, int high, char a)           //exibe elementos do vetor
{
    //caso básico de teste; tamanho do vetor é igual a 1
    if( (high - low) >=1 ) //se não for o caso básico
    {
        int media1= ( low + high) /2; //calcula o meio do vetor
        int media2= ( media1 +1);     //calcula o proximo elemento

        //gera a saida do passo de divisão
        cout << "split:     ";
        displaySubVector(low, high);
        cout << endl << "       ";
        displaySubVector(low, media1);
        cout << endl << "       ";
        displaySubVector(media2, high);
        cout << endl << endl;

        //divide o vetor pela metade; classifica cada metade (chamadas recursivas)
        sortSubvector(low, media1, a);       //primeira metade do vetor
        sortSubvector(media2, high, a);      //segudna metade do vetor

        //intercala 2 vetores classifica após as chamadas de divisão retornarem
        _merge(low, media1, media2, high);

    }//fim do if

}//fim da função subVector()

//intercala dois subvetores classificados em um subvetor classificado
void MergeSort::_merge(int left, int media1, int media2, int right )        //mescla os dois vetores classificados
{
    int leftindex    = left;               // índice no subvetor esquerdo
    int rightIndex   = media2;             // ìndice no subvetor direito
    int combnedIndex = left;               // ìndice no vetor de trabalho temporário
    vector< int >combned(sizeVec);            // vetor de trabalho

    //gera saìda dos dois subvetores antes da intercalação
    cout << "merge:     ";
    displaySubVector(left, media1);
    cout << endl <<"        ";
    displaySubVector(media2, right);
    cout << endl;

    //intercala vetores até  alcançar o fim de um deles
    while(leftindex <= media1 && rightIndex <= right)
    {
        //coloca o menor dos dois elementos atuais no resultado
        //e se move para o proximo espaço do vetor
        if(data[leftindex] <= data[rightIndex])
        {
            combned[ combnedIndex++] = data[ rightIndex ];
        }
        else
            combned[ combnedIndex++] = data[ rightIndex++];
    }//fim do while

    if(leftindex == media2)                  //se no fim do vetor esquerdo
    {
        while( rightIndex <= right)          //copia o restante do vetor direito
        {
            combned[combnedIndex++]= data[rightIndex++];
        }//fim do while
    }//Fim do if
    else //No fim do vetor direito
    {
        while(leftindex <=media1)           //copia o restante do vetor esquerdo
        {
            combned[combnedIndex++] = data[leftindex++];
        }//Fim do while
    }//Fim do else

    //copia valores de votla para o vetor original
    for(int i =left; i<=right; i++)
    {
        data[i] = combned[i];
    }

    //gera saida do vetor intercalado
    cout << "       ";
    displaySubVector(left, right);
    cout << endl << endl;

}//fim da função merge


void MergeSort::displaySubVector(int low, int high)const   //exibe o subvetor
{
    //gera espaços para o alinhamento
    for(int i=0; i<low; i++)
    {
        cout << "       ";
    }

    //gera saìda dos elementos deixados no vetor
    for(int i=low; i<=high; i++)
    {
        cout << " " << data[i];
    }

}//Fim da função  displaySubvector


//exibe os elementos do vetor
void MergeSort::displayElements()const
{
    displaySubVector(0, sizeVec-1);
}//Fim da função displayElements


//int size;                                //tamanho do vetor
// vector<int>data                         //vetor de ints


























