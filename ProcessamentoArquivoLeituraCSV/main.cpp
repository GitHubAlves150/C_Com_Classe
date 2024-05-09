#include <iostream>
#include <cstdlib>
#include <cstring>
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


int main()
{
    cout << "Hello REAA!" << endl;
    string Str_1,
           Str_2;
int i=0;
    ifstream Arquivo("Arquivo.csv", ios::in);//leitura de arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo para leitura.." << endl;
        exit(1);
    }
    while( getline(Arquivo, Str_1 ) )
    {

        cout <<Str_1<<endl;


    }
    return 0;
}
