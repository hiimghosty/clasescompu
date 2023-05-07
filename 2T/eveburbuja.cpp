#include <iostream>
using namespace std;

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

void ordenarBurbuja(int vector[], int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        impresionDeVector(vector,tam);
        cout << endl;
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




int main()
{
    // Algoritmos de ordenacion : burbuja

    int A[] = {1,10,2,3,4,5,6,7,8,9}, tam = 10;
    ordenarBurbuja(A, tam);
    impresionDeVector(A,tam);
    return 0;
}
