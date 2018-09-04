#include "HeapSort.h"

HeapSort::HeapSort()
{
    //ctor
}

HeapSort::HeapSort(int arr[], int tamanho)
{
    // Constroi a Heap
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        HeapiFy(arr, tamanho, i);

    // Extrai elemento da Heap um por um
    for (int i=tamanho-1; i>=0; i--)
    {
        // Move a raiz atual para o final
        swap(arr[0], arr[i]);

        // Chama HeapiFy Maxima na Heap reduzida
        HeapiFy(arr, i, 0);
    }
}

// Usa HeapiFy numa sub-árvore com nó i que
// um indice de arr[]. n é o tamanho da Heap
void HeapSort::HeapiFy(int arr[], int tamanho, int i)
{
    int maior = i;  // Atribui maior como raiz
    int esquerda = 2*i + 1;
    int direita = 2*i + 2;

    // Se o filho da esquerda for maior que a raiz
    if (esquerda < tamanho && arr[esquerda] > arr[maior])
        maior = esquerda;

    // Se o filho da direita for maior que a raiz
    if (direita < tamanho && arr[direita] > arr[maior])
        maior = direita;

    // Se maior nao for a raiz
    if (maior != i)
    {
        swap(arr[i], arr[maior]);
        // Chama HeapiFy recursivamente para a sub-árvore
        HeapiFy(arr, tamanho, maior);
    }
}

void HeapSort::PrintArray(int arr[], int tamanho)
{
    for (int i=0; i<tamanho; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

HeapSort::~HeapSort()
{
    //dtor
}
