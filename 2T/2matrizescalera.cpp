#include <iostream>
#include <cstdlib>
using namespace std;

void insertionSort(int N[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        int llave = N[i];
        int j = i - 1;
        while (j >= 0 && N[j] > llave)
        {
            N[j + 1] = N[j];
            j--;
        }
        N[j + 1] = llave;
    }
}
void imprimirVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

int main()
{
    int m, n;
    cout << "Introducir cantidad de filas" << endl;
    cin >> m;
    cout << "Introducir cantidad de columnas" << endl;
    cin >> n;

    int A[m][n]; // m y n deben existir antes de declarar mi matriz, y deben valer algo

    // Cargar numeros aleatorios
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }
    // Imprimr la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int x = m * n;
    int B[x];
    int contador = 0;
    // Volcando matriz en B
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[contador] = A[i][j];
            contador++;
        }
    }

    // Imprimir B
    cout << "El vector con la matriz volcada es:  " << endl;
    imprimirVector(B, x);
    //Ordenamos el vector con insertionsort
    insertionSort(B, x);
    // Cargamos de vuelta el vector en la matriz
    contador = 0;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            // Cargar la matriz de forma ascendente
            for (int j = 0; j < n; j++)
            {
                A[i][j] = B[contador];
                contador++;
            }
        }

        else
        {
            // Cargar de forma descendente
            for (int j = (n - 1); j >= 0; j--)
            {
                A[i][j] = B[contador];
                contador++;
            }
        }
    }
    // La matriz ordenada es:
    cout << "La matriz ordenada es " << endl;
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