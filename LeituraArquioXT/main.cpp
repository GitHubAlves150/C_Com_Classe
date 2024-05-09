//inclus�o de bibliotecas
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
             Str_2;

    ifstream Arquivo("CartaoPonto.txt", ios::in);
    //Sistema de prote��o contra falhas de abertura de arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo para leitura" << endl;//menssagem de erro
        exit(1);//o mesmo que abort()
    }
    //O uso do getline, ignora tabula�oes de espe�os tanto em << e >>
    while(  getline(Arquivo, Str) )
    {
        cout << Str << endl;
    }
    while(1);
    return 0;
}
