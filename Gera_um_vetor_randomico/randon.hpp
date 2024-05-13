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
    VectorRandon();
    void generateNumbersInvector();
    void displayElementes();
private:
    vector<int>date;

};

#endif // RANDON_H
