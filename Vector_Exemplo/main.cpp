#include <iostream>
#include <vector>
using std::vector;

using namespace std;


    vector<int>meuvetor;
    vector<int>::iterator var;

void verificaVetor()
{

    if(meuvetor.empty())
    {
        cout<< "esta vazio"<<endl;
    }
    else
    {
        cout<< "nao esta vazio"<<endl;
    }
}

int main()
{
    cout << "Hello REAA!" << endl;


    verificaVetor();

    meuvetor.push_back(01);
    meuvetor.push_back(101);
    meuvetor.push_back(110);
    meuvetor.push_back(111);
    cout << meuvetor[3] <<endl;
meuvetor[2]=22;
meuvetor.insert(meuvetor.begin()+3, 33);
verificaVetor();
    for( var = meuvetor.begin(); var != meuvetor.end(); var++)
    {
        cout<<">>"<<*var<<endl;
    }
cout<<endl;
verificaVetor();

    meuvetor.erase(meuvetor.begin()+3);
    for( var = meuvetor.begin(); var != meuvetor.end(); var++)
    {
        cout<<">>"<<*var<<endl;
    }
meuvetor.clear();
verificaVetor();
cout<<"Pulou o laço for porque o vetor esta vazio:\n";
for( var = meuvetor.begin(); var != meuvetor.end(); var++)
    {
        cout<<">>"<<*var<<endl;
    }
    verificaVetor();
    return 0;
}
