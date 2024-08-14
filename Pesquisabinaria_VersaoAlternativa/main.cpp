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

    int inicio=0;
    int fim =sizeof(vetordados)/sizeof(int)-1;
    int centro= (inicio+(fim-inicio) )/2;
    int indice   =-1;
    int chave    =8;

  cout<<'\n'<<sizeof(vetordados)/sizeof(int)-1 << " Eh o tamanho do vetor\n";

  while(inicio<=fim )
  {
    cout<<"Dentro do while: "<<centro <<endl;
    if(chave==vetordados[centro])
    {
    cout<<"Encontrou a chave" <<endl;
         indice=centro; break;
    }

    else if(chave < vetordados[centro] )
    {
    cout<<"chave < centro: "<<centro <<endl;
        fim=centro;
    }

    else if(chave > vetordados[centro])
    {
    cout<<"chave > centro: "<<centro <<endl;
        inicio=centro;
    }

    else
    {
    cout<<"chave Not found" <<endl;
        return chave;
    }
centro= (inicio+(fim-inicio) )/2;//(inicio + (fim-inicio))/2;
cout<<"centro vale "<< centro <<endl;
  }


cout << "\n\n numero " << chave << " encontrado no indice " << indice << endl;
    return 0;
}

























