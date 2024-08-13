#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstdlib>
using std::rand;
using std::srand;
#include <vector>
using std::vector;

#include <ctime>
using std::time;

void gera();

int main()
{
    cout << "Hello Reaa!" << endl;
    gera();




    return 0;
}


void gera()
{
int16_t again=0;

    while(1)
    {
        for(int i=0; i<5; i++)
        {

            cout << rand()%20 << endl;
        }

     cin >> again;
     system("clear");

    }

}
