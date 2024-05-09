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
             Str_2,
             Str_3,
             Str_4,
             Str_5,
             Str_6,
             Str_7;

    ifstream Arquivo("CartaoPonto.txt", ios::in);
    //Sistema de proteção contra falhas de abertura de arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo para leitura" << endl;//menssagem de erro
        exit(1);//o mesmo que abort()
    }
    //O uso do getline, ignora tabulaçoes de espeços tanto em << e >>
    while( !Arquivo.eof() )
    {
        /*  Arquivo >>  Str_1 >>
                     Str_2 >>
                     Str_3 >>
                     Str_4 >>
                     Str_5 >>
                     Str_6 >>
                     Str_7;*/


     cout << Str_1 << "            " <<
             Str_2 << "   "          <<
             Str_3 << "    "         <<
             Str_4 << "   "          <<
             Str_5 << "      "       <<
             Str_6 << "          "   <<
             Str_7 << endl;
    }

    return 0;
}
