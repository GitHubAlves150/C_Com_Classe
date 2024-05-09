#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ostream>
#include <fstream>

using std::exit;
using std::ios;
using std::ifstream;
using std::ofstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;
using std::strcmp;
using namespace::std;

int main()
{
    cout << "Hello REAA!" << endl;
    string str_1="ola";
    string str_2="ola";


    ifstream Arquivo("Arquivo.csv", ios::in);//leitura de arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo para leitura.." << endl;
        exit(1);
    }

int i=1;
    while( !Arquivo.eof() )
    {
        getline(Arquivo, str_1, ',');//No linux é virgula, no windows é ponto e virgula;
        //cout<<str_1<<endl;
        if(str_1=="506R")
        {

            cout <<"achei: "<< i/3 <<endl;
            cout << str_1<<endl;
        }
i++;

    }

    if(str_1==str_2)
    {
        cout <<"iguais"<<endl;

    }
    else
    {
        cout <<"N-iguais"<<endl;

    }
    Arquivo.close();

    return 0;
}









