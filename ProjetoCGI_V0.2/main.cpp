/*
/*Referencia  http://www-usr.inf.ufsm.br/~rissetti/elc117/t3/
/*            https://medium.com/@lorhansohaky/come%C3%A7ando-com-cgi-em-linguagem-c-e60b6216270
/*            https://www.ibm.com/docs/pt-br/netcoolomnibus/8.1?topic=scripts-environment-variables-in-cgi-script
/*            Programa Login e senha
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

    char    numberStr[100] = {""};  //armazena dados postados
    string  dataStr        =  "";   //receberá a string numberStr lida
    string  UserStr        =  "";   //armazena o numero em formato de string
    string  buffStr        =  "";   //tamanho da string de entrada
    int     numStrSize     =   0;   //numero a ser calculado

    //verifica se foi digitado alguma coisa no campo de edição
    if (getenv("CONTENT_LENGTH") )
    {
        numStrSize = atoi(getenv("CONTENT_LENGTH") );//Converte o valor ASC lida no campo para um inteiro e armazena num int
        cin.read(numberStr, numStrSize);             //cin.read() coloca em numbeStr o tamanho de string definido por numStrSize
        //Ou cin.read() lê uma entrada em char[] com o tamanho definido por numStrSize
        dataStr = numberStr;                         //Aqui, é passado a cadeia de caracteres do tipo char para o tipo string para poder
        //trabalhar com funções menbros da classe string

    }//end if

    //Localização das strings digitadas pelo usuário
    int userIndex  = dataStr.find("usuario=")+8;
    int finalIndex = dataStr.find("&");
    int senhaIndex = dataStr.find("senha=")+6;
    int finalPass  = dataStr.find("&button");
    //Fim da Localização das strings digitadas pelo usuário

    //Guarda as substrings digitadas
    UserStr = dataStr.substr(userIndex, finalIndex - userIndex);     //armazena o nome do usuário
    buffStr = dataStr.substr(senhaIndex, finalPass - senhaIndex);  //obtém a senha digitada

    //Objeto Page
    CGI_WEB Page;
    //Inicia a pagina xhml
    Page.xhtmlDocs_Begin();//Inicio da pagina
    Page.xhtmltitle("CGI V0.2");//Titulo da aba
    Page.style();//Define um estilo


    if(buffStr == "1501")
    {
        cout << "<h1>Acesso consedido a: "<< UserStr << "!</h1>"
             << "<hr/><p>Autorizado</p>";
    }
    else
        cout << "<hr/><p>Senha Incorreta</p>";





    Page.xhtmlDocs_End();//Fim da pagina
    return 0;
}





















