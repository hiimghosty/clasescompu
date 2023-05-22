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
    int m, n;
    cout << "Introducir cantidad de filas" << endl;
    cin >> m;
    cout << "Introducir cantidad de columnas" << endl;
    cin >> n;

    int A[m][n];

    // Cargar matriz con numeros aleatorios entre el 0 y 10
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Declaramos el vector donde vuelco la matriz
    int x = m * n;
    int B[x];
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[contador] = A[i][j];
            contador++;
        }
    }
    cout << "El vector con la matriz volcada es: " << endl;
    impresionDeVector(B, x);
    quicksort(B, 0, x - 1);
    cout << endl
         << "El vector ordenado es: " << endl;
    impresionDeVector(B, x);
    // Carga del vector ordenado en la matriz
    contador = 0;
    for (int i = 0; i < m; i++)
    {

        if ((i % 2) == 0)
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
    cout << endl;
    // Imprimir la matriz ordenada seria
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            {
                cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}