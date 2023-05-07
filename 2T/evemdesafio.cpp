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

int mayorElemento(int vector[], int tam)
{

    int mayor = vector[0];

    for (int i = 0; i < tam; i++)
    {
        if (vector[i] > mayor)
            mayor = vector[i];
    }

    return mayor;
}

void dividirVector(int vector[], int tam, int mayor)
{
    for (int i = 0; i < tam; i++)
    {
        vector[i] = (vector[i]) / mayor;
    }
}

int main()
{
    /*
    Cargar una matriz de M x N, encontrar el valor maximo

    dividir cada componente de la matriz por el valor maximo*/
    int m, n;
    cout << "Introducir numero de filas: ";
    cin >> m;
    cout << "Introducir numero de columnas: ";
    cin >> n;
    int numeros[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            numeros[i][j] = 0 + rand() % (30 - 0 + 1);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }

    int x = m * n; // dimension de mi vector
    int A[x];
    int contador = 0;
    int mayor;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[contador] = numeros[i][j];
            contador++;
        }
    }

    impresionDeVector(A, x);
    mayor = mayorElemento(A, x);
    cout << "El mayor elemento de la matriz es: " << mayor << endl;
    dividirVector(A, x, mayor);
    impresionDeVector(A, x);
    cout << endl;

    contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            numeros[i][j] = A[contador];
            contador++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}