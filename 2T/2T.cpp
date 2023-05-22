#include <iostream>
using namespace std;

void cargarVector(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void ordenarBurbujaAsc(int A[], int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        for (int j = 0; j < (tam - 1); j++)
        {
            if (A[j] > A[j + 1])
            {
                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
        cout << endl;
    }
}

void ordenarBurbujaDesc(int A[], int tam)
{
    for (int i = (tam/2)+1; i < (tam - 1); i++)
    {
        for (int j = (tam/2)+1; j < (tam - 1); j++)
        {
            if (A[j] < A[j + 1])
            {
                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
        cout << endl;
    }
}

void imprimirVector(int N[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        cout << N[i] << " ";
    }
}

int main()
{
    /* Leer N, siendo N el tamanho de un array, ordenar la primera mitad de forma ascendente
    y la segunda de forma descendente*/

    int n;
    cout << "Introducir N";
    cin >> n;
    int A[n];
    cargarVector(A, n);
    int mitad;
    mitad = n/2; 
    ordenarBurbujaAsc(A,mitad);
    ordenarBurbujaDesc(A,n);
    imprimirVector(A,n);

    return 0;
}