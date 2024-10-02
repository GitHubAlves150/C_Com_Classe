#include <iostream>
using std::cout;
using std::endl;

#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5


int main()
{
    int portA=0b000000,//0
        portB=0b001011,//11
        portC=0b000000,//0
        portD=0b000001,//1
        portE=0b010000,//16
        portF=0b000100;//4

    portA |=(1<<BIT2);//ajusta o terceiro bit para 1; 0b000100
    cout <<portA<<endl;

    portB = portB & 0b001000;// mantém o bit 1 onde coincidir.
    cout<<portB<<endl;


    portC |=(1<<3);//desloca o bit 1 para esquerda, a quarta casa.
    cout<<portC<<endl;


    portD ^=(1<<BIT2) | (1<<BIT4);//0b10101, ajusta o terceiro e quinto bit
    cout << portD<<endl;

    cout << portE << endl;
    portE &= ~(1<<3);//ajusta o terceiro bit pra zero, ouseja desliga o terceiro bit
    cout << portE << endl;

    cout << portE << endl;
    portE ^= (1<<3);//inverte o terceiro bit.
    cout << portE << endl;

    portF=portF & (1<<2);//verifica se o terceiro bit é 1. Retorna o valor em binario
    cout << portF << endl;



    return 0;
}
