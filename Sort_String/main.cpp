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

#include <cstring>
using std::string;

int main()
{
    cout << "Hello REAA!" << endl;

    vector<int>vetorDados;
    unsigned seed=time(0);
    srand(seed);

/*

for(int i=0; i<20; i++)
{

    vetorDados.push_back(rand()%1000);
    cout << setw(8) <<vetorDados[i];

    if((i%2)==1)
        cout << '\n';
}

*/
cout << endl;

vector<string> strVec;
strVec.push_back("monday");
strVec.push_back("cat");
strVec.push_back("bee");
strVec.push_back("loki");

//Mostra o vetor natural

for(int i=0; i<4; i++)
{
   cout << strVec[i] << endl;

}

//ordena o vetor em ordem alfabetica (lexicograficamente)
sort(strVec.begin(), strVec.end());

//Pula uma linha
cout << endl;
//mostra o vetor ordenado
for(int i=0; i<4; i++)
{
   cout << strVec[i] << endl;

}

//Fim
    return 0;
}
































