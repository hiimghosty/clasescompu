#include <iostream>
using namespace std;

void insertionSort(int vector[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        int llave = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] > llave)
        {
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = llave;
    }
}

int main()
{

    int A[] = {5, 4, 3, 2, 1};
    int tam = 5;
    insertionSort(A, tam);

    return 0;
}