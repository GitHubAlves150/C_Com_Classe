#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>// Para rand() e srand()
#include <ctime>    // Para time()



// Função para mesclar duas metades ordenadas do array
void merge(int arr[], int inicio, int meio, int fim)
{
    int n1 = meio - inicio + 1, n2 = fim - meio;
    int L[n1], R[n2], i, j, k;

    for (i = 0; i < n1; i++) L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++) R[j] = arr[meio + 1 + j];

    i = j = 0;
    k = inicio;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Função recursiva para ordenar usando MergeSort
void mergeSort(int arr[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

int main()
{
    int arr[15] = {0},
                  tamanho = sizeof(arr) / sizeof(arr[0]);//Maneira sutil de saber o tamanho de um vetor
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));


    for(int i=0; i<tamanho; i++)
    {
        arr[i]=rand()%1000;// Gera números aleatórios de 0 a 999
        cout << " " << arr[i];
    }

    cout<< "\n\n" <<endl;

    mergeSort(arr, 0, tamanho - 1);
    for (int i = 0; i < tamanho; i++) cout << " "<<arr[i] ;
    return 0;
}
