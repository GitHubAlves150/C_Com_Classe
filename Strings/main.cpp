#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <cctype>
using std::toupper;


int main()
{
    cout << "Hello REAA!" << endl;

    //Formas declaração de uma string
    string str_1="Meu nome eh ";
    string str_2("Lucas Lorenco Alves");
    string str_3=" ";
    cout << str_1 << str_2 << endl;

    //Posso concatenar  usando o operador sobrecarregado
    str_3= str_1 + str_2;
    cout << str_3 << endl;

    str_3+="!!!";
    cout << str_3 << endl;

    str_3.swap(str_1);
    cout << str_3 << endl;

    //======================================
    //Comparaçao de strings
    string  Alpha ("Alpha"),
            Ohmega("Ohmega"),
            Delta ("Ohmega");

    cout << "1° Retorno: " << (Alpha == Ohmega)     << endl;// Retorna 0 se forem diferente, senão 1
    cout << "2° Retorno: " << (Ohmega == Delta)     << endl;
    cout << "3° Retorno: " << (Alpha != Ohmega)     << endl;
    cout << "4° Retorno: " << (Alpha > Ohmega)      << endl;
    cout << "5° Retorno: " << (Alpha < Ohmega)      << endl;
    cout << "6° Retorno: " << (Alpha <= Ohmega)     << endl;
    cout << "7° Retorno: " << Alpha.compare(str_2)  << endl;
    cout << "8° Retorno: " << Ohmega.compare(Delta) << endl;


    cout << "9° Tamanho: " << Alpha.size() << endl;
    cout << "10° capacity: " << Ohmega.capacity() << endl;
    cout <<"11° comprimento: " << Ohmega.length() <<endl;
    cout <<"12° Size: " << Ohmega.size() <<endl;

    int tamanho= Ohmega.size();//Retorna o tamamnho da string Ohmega e atribui o valor na variavel tamanho;
    cout <<"Tamanho da string: "<< tamanho << endl;

    Alpha = Ohmega;//Atribui a string em Ohmega para Alpha
    cout << Alpha << endl;//atribui a string ohmega na string alpha

    string a = ("Alice e Beto gostam de "),
       b = ("chocolate."),
       c = ("doce de leite."),
       d = ("pipoca."),
       e = (c);

cout << a + b << endl;
cout << a + c << endl;
cout << a + d << endl;
cout << a + e << endl;


    return 0;
}

















