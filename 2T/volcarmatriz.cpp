#include <iostream>
#include <cstdlib>
using namespace std;
//Pedir al usuario un entero m y n, declarar una matriz m*n y ordenar de forma escalera
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

    int m, n, x;
    cout << "Introducir filas de la matriz" << endl;
    cin >> m;
    cout << "Introducir columnas de la matriz " << endl;
    cin >> n;
    int matriz[m][n];
    x = m * n;
    int A[x];

    // Carga de matriz, elementos del 0 al 9
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Volcar la matriz
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[contador] = matriz[i][j];
            contador++;
        }
    }

    // Imprimir el vector
    cout << endl
         << "El vector es " << endl;
    impresionDeVector(A, x);
    quicksort(A, 0, x);
    cout << endl
         << "El vector ordenado es: " << endl;
    impresionDeVector(A, x);

    int contador2 = 0;

    for (int i = 0; i < m; i++)
    {

        if ((i % 2) != 0)
        {
            for (int j = (n - 1); j >= 0; j--)
            {
                matriz[i][j] = A[contador2];
                contador2++;
            }
        }

        else
        {
            for (int j = 0; j < n; j++)
            {
                matriz[i][j] = A[contador2];
                contador2++;
            }
        }

        cout << endl;
    }

    // Imprimir matriz
    cout << endl;
    cout << "La matriz ordenada es " << endl;

    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}