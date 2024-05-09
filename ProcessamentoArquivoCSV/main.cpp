#include <iostream>
using namespace std;

#include <cstdlib>
using std::exit;

#include <iomanip>
using std::setw;

#include <time.h>



#include <fstream>
using std::ofstream;//para trabalhar com arquivos


int main()
{
    //Boas vindas
    cout << "Hello REAA!" << endl;

    int    dia,
           mes,
           ano;
    int    Time=0;
    float  nivel=0.0;

time_t mytime;
mytime= time(NULL);
cout << ctime(&mytime);
cout << "\n";



    //Gera o arquivo se caso n�o existir.
    ofstream Arquivo("ArquivoExel.csv", ios::app);
    //Verifica se o arquivo foi aberto com exid�
    if(!Arquivo)
    {
        cout << "Sem sucesso ao abrir o arquivo:" << endl;
        exit(1); //Aborta o programa, se caso n�o rolar.
    }

    cout << "Arquivo aberto com sucesso: " << endl;

    while(cin >> dia >> mes >> ano  )
    {
        Arquivo << dia << "/" << mes << "/" << ano+1900 << ";"<< ctime(&mytime) << "hs" <<endl;
    }
    Arquivo.close();//Fecha o arquivo

    return 0;
}
