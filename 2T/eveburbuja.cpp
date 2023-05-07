#include <iostream>
using namespace std;

void ordenarBurbuja(int vector[], int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        for (int j = 0; j < (tam - 1); j++)
        {
            int aux = vector[j+1];
            if(vector[j] > vector[j+1]){
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}


int main()
{
    // Algoritmos de ordenacion : burbuja

    int A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, tam = 10;
    ordenarBurbuja(A, tam);
    impresionDeVector(A,tam);
    return 0;
}
