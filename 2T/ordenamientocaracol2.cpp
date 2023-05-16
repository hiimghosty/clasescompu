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
    /*Ordenar una matriz caracol*/
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
            A[i][j] = 0 + rand() % ((m * n) - 0 + 1); // enteros entre 0 y 10
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
    int inicioFila = 0, finalFila = (m - 1);
    int inicioColumna = 0, finalColumna = (n - 1);
    contador = 0;
    while (inicioFila <= finalFila and inicioColumna <=finalColumna)
    {
        // Recorrer de izquierda a derecha
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = B[contador];
            contador++;
        }
        inicioFila++;

        // Mover de arriba a abajo
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = B[contador];
            contador++;
        }
        finalColumna--;
        // Movernos de derecha a izquierda;
        if (inicioFila <= finalFila)
        {
            for (int i = finalColumna; i >= inicioColumna; i--)
            {
                A[finalFila][i] = B[contador];
                contador++;
            }
            finalFila--;
        }

        // Mover de abajo a arriba
        if (inicioColumna <= finalColumna)
        {
            for (int i = finalFila; i >= inicioFila; i--)
            {
                A[i][inicioColumna] = B[contador];
                contador++;
            }
            inicioColumna++;
        }
    }
    // Imprimir matriz
    cout << "La matriz ordenada s: " << endl;
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