#include <iostream>
using namespace std;
// Pedir al usuario que ingrese N, siendo N la dimension de una matriz cuadrada, cargar
// Aleatoriamente los elementos de N, y ordenar de forma ascendente

int nroAleatorio()
{
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return 0 + rand() % (10 - 0 + 1);
}

void cargaDeMatriz(int *pt, int tam)
{

    for (int i = 0; i < tam; i++)
    {
        *(pt + i) = nroAleatorio();
    }
}

void imprimirMatriz(int *pt, int tam, int columnas)
{
    cout << "La matriz impresa es: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << *(pt + i) << " ";
        if (((i + 1) % columnas) == 0)
            cout << endl;
    }
}

void ordenarBurbuja(int *A, int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        for (int j = 0; j < (tam - 1); j++)
        {
            if (*(A + j) < *(A + j + 1))
            {
                int aux = *(A + j);
                *(A + j) = *(A + j + 1);
                *(A + j + 1) = aux;
            }
        }
    }
}

int main()
{
    int N;
    cout << "Introducir dimension de la matriz: ";
    cin >> N;
    int A[N][N];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, N * N);
    imprimirMatriz(pt, N * N, N);
    ordenarBurbuja(pt, N * N);
    cout << "La matriz ordenada es: " << endl;
    imprimirMatriz(pt, N * N, N);
    return 0;
}