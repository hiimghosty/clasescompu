#include <iostream>
#include <cstdlib>
using namespace std;

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

void quicksort(int A[], int extremoIzquierdo, int extremoDerecho)
{
    int i, j, x, aux;
    i = extremoIzquierdo;
    j = extremoDerecho;
    x = A[(extremoIzquierdo + extremoDerecho) / 2]; // PIVOT
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
    /*Ordenar una matriz de numeros aleatorios*/
    int m, n;
    cout << "Introducir numero de filas" << endl;
    cin >> m;
    cout << "Introducir numero de columnas" << endl;
    cin >> n;

    int A[m][n];
    // Cargo la matriz con numeros aleatorios
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }
    // Imprimir la matriz
    cout << "La matriz es: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " "; // enteros entre 0 y 10
        }
        cout << endl;
    }
    // Volcar la matriz en un vector
    int contador = 0;
    int x = m * n;
    int B[x];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[contador] = A[i][j];
            contador++;
        }
    }

    // Imprimir el vector
    cout << endl
         << "La matriz volcada en el vector es: " << endl;
    impresionDeVector(B, x);
    cout << endl;
    quicksort(B, 0, x-1);
    cout << "El vector ordenado es: " << endl;
    impresionDeVector(B, x);
    // Cargo la matriz de vuelta
    contador = 0;
    for (int i = 0; i < m; i++)
    {
        // Cargar la fila de forma ascendente
        if (i % 2 == 0)
        {

            for (int j = 0; j < n; j++)
            {
                A[i][j] = B[contador];
                contador++;
            }
        }

        else
        {
            for (int j = (n - 1); j >= 0; j--)
            {

                A[i][j] = B[contador];
                contador++;
            }
        }
    }
    // Impresion de la matriz ordenada
    cout << "La matriz ordenada es: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}