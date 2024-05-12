#include "randon.hpp"

VectorRandon::VectorRandon()
{
    srand(time(0));
    for(int i=0; i<10; i++)
    {
        date.push_back(rand()%20);
    }
}


void VectorRandon::displayElementes()
{
    for(int i=0; i<10; i++)
    {
        cout << date[i] << "-";

    }

}
