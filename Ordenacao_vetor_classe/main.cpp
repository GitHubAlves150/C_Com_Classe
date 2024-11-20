#include <iostream>
using namespace std;
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
bool Ordena(pessoa A, pessoa B)
{
    if(A.getnome() < B.getnome())
        return true;
    return false;
}
int main()
{
    cout << "Hello Reaa!" << endl;
    vector<pessoa> Vp;
    vector<pessoa>::iterator j;

    Vp.push_back(pessoa("Maria", 56));
     Vp.push_back(pessoa("Joao", 44));
      Vp.push_back(pessoa("Aberlardo", 12));
       Vp.push_back(pessoa("Zeca", 29));
        Vp.push_back(pessoa("Yuri", 25));

        sort(Vp.begin(), Vp.end(), Ordena);

        for(j=Vp.begin(); j!=Vp.end(); j++)
        {
            cout<<">>"<<j->getnome() <<", " <<j->getidade()<<endl;
        }

    return 0;
}

























