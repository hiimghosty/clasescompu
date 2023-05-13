#include <iostream>
using namespace std;
// Implementar ordenamiento quicksort
void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

void quicksort(int A[], int extremoIzquierdo, int extremoDerecho)
{
    int i, j, x, aux;
    i = extremoIzquierdo;
    j = extremoDerecho;
    x = A[(extremoIzquierdo + extremoDerecho) / 2];
    do
    {
        while ((A[i] < x) and (j <= extremoDerecho))
        {
            i++;
        }
        while ((x < A[j]) and (j > extremoIzquierdo))
        {
            j--;
        }

        if (i <= j)
        {
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
            i++;
            j--;
        }

    } while (i <= j);

    if (extremoIzquierdo <= j)
    {
        quicksort(A, extremoIzquierdo, j);
    }

    if (i < extremoDerecho)
    {
        quicksort(A, i, extremoDerecho);
    }
}
int main()
{
    int A[] = {7, -2, 4, 1, 6, 5, 0, -4, 2};
    int tam = sizeof(A) / sizeof(A[0]);
    cout << "El vector sin ordenar es: " << endl;
    impresionDeVector(A, tam);
    quicksort(A, 0, tam);
    cout << "El vector ordenado es: " << endl;
    impresionDeVector(A, tam);

    return 0;
}
