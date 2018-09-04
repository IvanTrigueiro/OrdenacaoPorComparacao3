#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <iostream>
using namespace std;

class HeapSort
{
    public:
        HeapSort();
        HeapSort(int arr[], int tamanho);
        void PrintArray(int arr[], int tamanho);
        void HeapiFy(int arr[], int tamanho, int maior);
        virtual ~HeapSort();
    private:
        int arr[], tamanho;
};

#endif // HEAPSORT_H
