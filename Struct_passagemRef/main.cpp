#include <iostream>

using namespace std;

struct Est_Clima
{
    string data;
    int    serie;
    float  velo_vento;

} Estacao00, Estacao01;

void Monitoramento(Est_Clima &);
void Display_Monitoramento(Est_Clima &);

int main()
{
    cout << "Hello REAA!" << endl;

    Monitoramento(Estacao00);
    Display_Monitoramento(Estacao00);


    Estacao00={"03/06/2024", 5603, 0.48};


    Display_Monitoramento(Estacao00);
    Display_Monitoramento(Estacao00);


    return 0;
}


void Monitoramento(Est_Clima &estacaoZero)
{

    Estacao00.data="02/12/2024";
    Estacao00.serie=45000;
    Estacao00.velo_vento=0.68;

}


void Display_Monitoramento(Est_Clima &estacaoZero)
{


    cout<< "Velocidade vento: "     << estacaoZero.velo_vento << endl;
    cout<< "Serie do equipamento: " << estacaoZero.serie      << endl;
    cout<< "Data de registro: "     << estacaoZero.data       <<endl;


}




























