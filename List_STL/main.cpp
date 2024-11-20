#include <iostream>
using namespace std;
#include <list>
#include <vector>
using std::vector;
#include <cstring>
#include <algorithm>



class pessoa
{
private:
    string Nombre;
    int Age;
public:
    pessoa(string nome, int idade)
    {
        setnome(nome);
        setidade(idade);
    }
    void setnome(string n)
    {
        Nombre=n;
    }
    void setidade(int id)
    {
        Age=id;
    }

    string getnome()
    {
        return Nombre;
    }
    int getidade()
    {
        return Age;
    }
};

int main()
{
    cout << "Hello REAA!" << endl;
    list<string>Alunos;
    list<string>::iterator j;

    Alunos.push_back("Lucas");
    Alunos.push_back("Henrique");
    Alunos.push_back("Joana");
    Alunos.push_back("Tadeu");

/*
for(j=Alunos.begin(); j!=Alunos.end(); j++)
{
    cout<<">>"<<*j<<endl;

}
*/
//range-based
for(const auto& cliente: Alunos)
{
    cout<<"<<"<<cliente<<endl;

}
//auto it= Alunos.begin();
//advance(it, 2);
Alunos.insert(Alunos.end(),"Tiago");
Alunos.insert(Alunos.end(),"Thiago");

cout<<endl;

for(const auto& cliente: Alunos)
{
    cout<<"<<"<<cliente<<endl;

}




    return 0;
}
























