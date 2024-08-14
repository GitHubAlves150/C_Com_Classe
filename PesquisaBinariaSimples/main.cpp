//==========================================
//inclusao de libs basicas
#include <iostream>
using namespace std;
#include <vector>
using std::vector;
#include <ctime>
using std::time;
#include <cstdlib>
using std::srand;
#include <iomanip>
using std::setw;
#include <algorithm>
using std::sort;
//==========================================
//--Fim--

int main()
{

//==========================================
//estrutura do vetor  ordenado
    int vetordados[20]={0};

    for(int i=0; i<20; i++)
    {
        vetordados[i]=i+4;
    }
    for(int i=0; i<20; i++)
    {
        cout << " " << setw(4) << vetordados[i];
        if(i == 9)
        cout << '\n';
    }
//Fim


////==========================================
//pesquisa fdsfds

    int metadeIni=0;
    int metadeFim =sizeof(vetordados)/sizeof(int)-1;
    int centro   =(metadeIni+metadeFim+1)/2;
    int indice   =-1;
    int chave    =18;

    cout << "\n\nO tamnho do vetror eh " << metadeFim<< endl;

    while( (metadeIni<=metadeFim+1) && (indice==-1))
    {
        if(chave == vetordados[centro])
        {
            indice = centro;
        }

        else if(chave < vetordados[centro])
        {
            metadeFim = centro-1;
        }

        else if(chave > vetordados[centro])
        {
            metadeIni =centro+1;
        }

        centro= (metadeIni+metadeFim+1)/2;
    }



cout << "\n\nnumero " << chave << " encontrado no indice " << indice << endl;
    return 0;
}

























