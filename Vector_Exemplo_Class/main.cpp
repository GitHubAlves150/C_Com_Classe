#include <iostream>
#include <vector>
using std::vector;
#include <cstring>
using namespace std;

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
    cout << "Hello Reaa!" << endl;

    vector<pessoa> VetorPessoa;
    vector<int>::iterator j;

    VetorPessoa.push_back(pessoa("Lucas", 33));
    VetorPessoa.push_back(pessoa("Jonas", 32));

    for(int i=0; i < VetorPessoa.size(); i++)
    {
        cout <<">>"<<VetorPessoa[i].getnome()<<", " <<VetorPessoa[i].getidade()<<endl;
    }

    return 0;
}
