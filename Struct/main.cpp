#include <iostream>

using namespace std;

struct Produtos
{
    string nameproduct;
    int    quantidade;
    float  preco;

} item;

int main()
{
    cout << "Hello REAA!" << endl;

    item.nameproduct="Queijo";
    item.quantidade=2;
    item.preco=5.69;


    cout<< "Nome produto: " << item.nameproduct<<endl;
    cout<< "valor produto: " << item.preco<<endl;
    cout<< "quantidade produto: " << item.quantidade<<endl;


    return 0;
}
