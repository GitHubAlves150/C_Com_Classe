//
//  Classe PesquisaBinaria
//  Arquivo .hpp
//  Dr. Eng. Wagner Rambo, outubro de 2022
//

#ifndef  BINARIA
#define  BINARIA


// ==============================================
// --- Bibliotecas ---
#include <vector>
using std::vector;


// ==============================================
// --- Classe ---
class PesquisaBinaria
{
  public:
    PesquisaBinaria(int sizeVec);   //construtor, gera o vetor

    int pesquisa(int chave) const;  //faz pesquisa binária e retorna o índice da chave encontrada, se encontrada
    void dispVec() const;           //imprime o conteúdo do vetor

  private:
    int _sizeVec;                   //armazena o tamanho do vetor
    vector<int> dados;              //declara um vetor de inteiros

}; //end class
//

#endif // BINARIA
