#include <iostream>
#include "HeapSort.h"
using namespace std;

int main()
{
    HeapSort heap;
    cout<<"\n Digite o tamanho do array: "<<endl;
    int tamanho;
    cin>>tamanho;
    int arr[tamanho];
    cout<<"\n Digite os valores do array desordenado: "<<endl;
    int valores;
    for(int i=0; i<tamanho; i++){
        cin>>valores;
        arr[i] = valores;
    }

    HeapSort(arr, tamanho);

    cout << "\n O array ordenado eh: \n";
    heap.PrintArray(arr, tamanho);
}
