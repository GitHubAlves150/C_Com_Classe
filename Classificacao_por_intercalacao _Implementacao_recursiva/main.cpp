#include <iostream>

using namespace std;

#include "MergeSort.hpp"

int main()
{
    cout << "Hello REAA!" << endl;

    MergeSort sortVector( 10 );

    cout << "Unsorted vector:" << endl;
    sortVector.displayElements();   //imprime o vetor não classificado
    cout << endl << endl;

    sortVector._sort();              //classifica o vetor

    cout << "Sorted vector:" << endl;

    sortVector.displayElements();  //imprime o vetor classificado
    cout << endl;

    return 0;
}
