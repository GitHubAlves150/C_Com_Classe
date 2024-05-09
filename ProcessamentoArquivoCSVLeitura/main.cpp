//inclusão de bibliotecas
#include <iostream>
using std::cout;
using std::cin;
using std::ios;
using std::endl;
using std::cerr;
#include <cstdlib>
using std::exit;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
using std::ofstream;
//programa principal
int main()
{
    string   Str_1,
             Str_2[20];
    int i=0;
    ifstream Arquivo("ArquivoExel.csv", ios::in);
    //Sistema de proteção contra falhas de abertura de arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo para leitura" << endl;//menssagem de erro
        exit(1);//o mesmo que abort()
    }
    //O uso do getline, ignora tabulaçoes de espeços tanto em << e >>
    while(  getline(Arquivo, Str_1, ',') )
    {
        Str_2[i]=Str_1;
        i++;
    }


    cout << "aqui "<<Str_2[0] << endl;
    cout << "aqui "<<Str_2[1] << endl;
    cout << "aqui "<<Str_2[2] << endl;
    while(1);
    return 0;
}
