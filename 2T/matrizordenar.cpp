#include <iostream>
#include <cstdlib>

using namespace std;

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

void ordenarVector(int vector[], int tam)
{
    // Ordenamiento burbuja
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            int aux = vector[j + 1];
            if (vector[j] > vector[j + 1])
            {
                vector[j + 1] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

int main()
{
    // Cargar una matriz m*m y ordenar de forma ascendente
    int m, n, x;
    cout << "Introducir cantidad de filas: ";
    cin >> m;
    cout << "Introducir cantidad de columnas: ";
    cin >> n;
    int mat[m][n];
    x = m * n;
    int A[x];
    // Cargar elementos aleatorios en la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = 0 + rand() % (10 - 0 + 1);
        }
    }
    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // Volcar la matriz
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[contador] = mat[i][j];
            contador++;
        }
    }
    cout << "La matriz volcada es: " << endl;
    impresionDeVector(A, x);
    ordenarVector(A, x);
    cout << "El vector ordenado es: " << endl;
    impresionDeVector(A, x);
    // Cargar el vector en la matriz
    contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = A[contador];
            contador++;
        }
    }
    // Imprimir la matriz
    cout << "La matriz ordenada es: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}