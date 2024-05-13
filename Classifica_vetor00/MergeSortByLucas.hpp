
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

    void generateNumbersInvector();
    void DisplayElementes();
private:
    vector<int>date;
    vector<int>vectorRigth;
    vector<int>vectorLeft;
    int _TAM;


};

#endif // RANDON_H
