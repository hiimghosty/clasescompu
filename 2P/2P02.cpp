#include <iostream>
using namespace std;

int nroAleatorio()
{
    return 0 + rand() % (100 - 0 + 1);
}

void cargaDeMatriz(int *x, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < (cantElementos); i++)
    {
        *(x + i) = nroAleatorio();
    }
}

void imprimirVector(int A[], int N)
{
    cout << "El vector es:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}

void volcarMatriz(int *p, int V[], int m, int n)
{
    int cantidadDeElementos = m * n, contador = 0;
    for (int i = 0; i < cantidadDeElementos; i++)
    {
        V[contador] = *(p + i);
        contador++;
    }
}

void ordenarMatriz(int *p, int V[], int m, int n)
{
    int cantidadDeElementos = m * n, contador = 0;

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                *(p + i * n + j) = V[contador];
                contador++;
            }
        }

        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                *(p + i * n + j) = V[contador];
                contador++;
            }
        }
    }
}

void imprimirMatriz(int *p, int m, int n)
{

    cout << "La matriz es: " << endl;
    for (int i = 0; i < m * n; i++)
    {
        cout << *(p + i) << " ";
        if ((i + 1) % n == 0)
            cout << endl;
    }
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
    int m, n;
    cout << "Introducir dimensiones de la matriz" << endl;
    cin >> m;
    cin >> n;
    int A[m][n];
    int *p = &A[0][0];
    cargaDeMatriz(p, m, n);
    imprimirMatriz(p, m, n);
    int tam = m * n;
    int V[tam];
    volcarMatriz(p, V, m, n);
    ordenarBurbuja(V, tam);
    imprimirVector(V, tam);
    ordenarMatriz(p,V,m,n);
    imprimirMatriz(p,m,n);

    return 0;
}