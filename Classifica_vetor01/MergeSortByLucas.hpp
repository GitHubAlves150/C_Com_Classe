
#ifndef RANDON_H
#define RANDON_H
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstdlib>
using std::srand;
using std::rand;

#include <ctime>
using std::time;

using namespace::std;

class VectorRandon
{
public:
    VectorRandon(int=0);//cnt com 10 elementos default
    void divideVetorDireito();
    void divideVetorEsquerdo();
    void generateNumbersInvector();
    void ordenavetorDireito();
    void DisplayElementes();
private:
    vector<int>date;
    vector<int>vectorRigth;
    vector<int>vectorLeft;
    vector<int>vectorAuxiliar;
    int _TAM,
        _Auxiliar;


};

#endif // RANDON_H
