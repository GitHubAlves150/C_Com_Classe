/*
/*Referencia  http://www-usr.inf.ufsm.br/~rissetti/elc117/t3/
/*            https://medium.com/@lorhansohaky/come%C3%A7ando-com-cgi-em-linguagem-c-e60b6216270
/*            https://www.ibm.com/docs/pt-br/netcoolomnibus/8.1?topic=scripts-environment-variables-in-cgi-script
*/

#include <iostream>
using namespace std;
#include <string>
using std::string;

#include <cstdlib>
using std::getenv;
using std::atoi;

#include "WEB.hpp"

int main()
{

    char    numberStr[100]= {""}; //armazena dados postados
    string  dataStr        = "";   //receberá a string numberStr lida
    string  buffStr        = "";   //armazena o numero em formato de string
    int     numStrSize     = 0 ;   //tamanho da string de entrada
    int     number         = 0 ;   //numero a ser calculado

    //verifica se foi digitado alguma coisa no campo de edição
    if (getenv("CONTENT_LENGTH") )
    {
        numStrSize = atoi(getenv("CONTENT_LENGTH") );//Converte o valor ASC lida no campo para um inteiro e armazena num int
        cin.read(numberStr, numStrSize);             //cin.read() coloca em numbeStr o tamanho de string definido por numStrSize
        //Ou cin.read() lê uma entrada em char[] com o tamanho definido por numStrSize
        dataStr = numberStr;                         //Aqui, é passado a cadeia de caracteres do tipo char para o tipo string para poder
        //trabalhar com funções menbros da classe string

    }//end if

    CGI_WEB Page;

    Page.xhtmlDocs_Begin();//Inicio da pagina
    Page.xhtmltitle("CGI V0.2");//Titulo da aba
    Page.style();
    //Page.xhtmlDocs_acess();

    Page.xhtmlForm("Digite...");
    if(numStrSize > 0)
    {
        int nomeIndex  = dataStr.find_first_of("numstr=")+7;
        int finalIndex = dataStr.find_first_of("&")-1;

        buffStr = dataStr.substr(nomeIndex, finalIndex-nomeIndex);//armazena o numero inserido


        if(buffStr == "")
            cout << "<p>Nenhum numero foi inserido.</p>";

        else   //Caso tenha sido inserido , apresenta o resultado
        {
            number  =  stoi(buffStr);  //converte string em inteiro
            number *=  number;      //calcula o quadrado de number
            Page.xhtml_valores("Numero ao quadrado= ", number);
        }//end else

    }//end if

    else//nenhum numero foi inserido
        cout<< "<p>Nenhum numero foi inserido...</p>";


    Page.xhtmlDocs_End();//Fim da pagina
    return 0;
}





















