#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Pedir al usuario que ingrese N, siendo N la dimension de una matriz cuadrada, cargar
// Aleatoriamente los elementos de N, y ordenar de forma ascendente

int nroAleatorio()
{
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return 0 + rand() % (10 - 0 + 1);
}

void imprimirVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void ordenarBurbuja(int A[], int tam)
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
    }
}

int main()
{
    srand(time(NULL));
    cout << "Ingresar N";
    int N;
    cin >> N;
    int A[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = nroAleatorio();
        }
    }

    cout << "La matriz original es: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Declaro el vector para volcar mi matriz
    int tam = N * N;
    int V[tam];
    int contador = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            V[contador] = A[i][j];
            contador++;
        }
    }

    cout << "El vector con la matriz volcada es: " << endl;
    imprimirVector(V, tam);
    cout << "Ordenamos el vector" << endl;
    ordenarBurbuja(V, tam);
    imprimirVector(V, tam);

    contador = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = V[contador];
            contador++;
        }
    }

    cout << "La matriz ordenada es: " << endl;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}