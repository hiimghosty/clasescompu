#include <iostream>
using namespace std;

void imprimirVector(int N[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        cout << N[i] << " ";
    }
}

void ordenarBurbuja(int A[], int tam)
{
    // COMPLETAR
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

int main()
{

    int A[] = {1, 2, 3, 4, 5, 6, 8, 7};

    int tam = 8;
    int x = 5;
    ordenarBurbuja(A, tam);
    cout << "El vector finalmente ordenado es: " << endl;
    imprimirVector(A, tam);
    // imprime ordenado o no?
    return 0;
}