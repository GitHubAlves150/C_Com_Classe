
// programa usado para exemplificar o uso da função nativa sort() na linha 46
#include <iostream>
using namespace std;

#include <vector>
using std::vector;

#include <ctime>
using std::time;


#include <cstdlib>
using std::srand;

#include <iomanip>
using std::setw;

#include <algorithm>
using std::sort;

int main()
{
    cout << "Hello REAA!" << endl;

    vector<int>vetorDados;
    unsigned seed=time(0);
    srand(seed);



for(int i=0; i<20; i++)
{

    vetorDados.push_back(rand()%1000);
    cout << setw(8) <<vetorDados[i];

    if((i%2)==1)
        cout << '\n';
}


cout << endl;


sort(vetorDados.begin(), vetorDados.end());


for(int i=0; i<20; i++)
{
    vetorDados.push_back(rand()%1000);
    cout << setw(8) <<vetorDados[i];
    cout << '\n';
    /*
    if((i%2)==1)

    */
}







    return 0;
}
































