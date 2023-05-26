#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void burbuja(int v[], int tam)
{
    int aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    cout << "Vector ordenado: ";
    for (int i = 0; i < tam; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void imprimirmatriz(int *p, int m, int n)
{
    for (int i = 0; i < m * n; i++)
    {
        cout << *(p + i) << " ";
        if ((i + 1) % n == 0)
        {
            cout << endl;
        }
    }
}

int main()
{
    srand(time(NULL));
    int m, n;
    cout << "Introducir cantidad e filas y columnas: ";
    cin >> m;
    cin >> n;
    //----Crear matriz
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (11 - 0 + 1);
        }
    }
    //----Imprimir matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //----Volcar matriz
    int v[m * n];
    int contador;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[contador] = A[i][j];
            contador++;
        }
    }
    for (int i = 0; i < m * n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    burbuja(v, m * n);

    //----Matriz Caracol----//
    contador = 0;
    int iniciofila = 0, finalfila = m - 1;
    int iniciocolumna = 0, finalcolumna = n - 1;

    while (iniciofila <= finalfila && iniciocolumna <= finalcolumna)
    {
        // izquierda a derecha
        for (int i = iniciocolumna; i <= finalcolumna; i++)
        {
            A[iniciofila][i] = v[contador];
            contador++;
        }
        iniciofila++;
        // arriba a bajo
        for (int i = iniciofila; i <= finalfila; i++)
        {
            A[i][finalcolumna] = v[contador];
            contador++;
        }
        finalcolumna--;

        // derecha a izquierda
        if (iniciofila <= finalfila)
        {
            for (int i = finalcolumna; i >= iniciocolumna; i--)
            {
                A[finalfila][i] = v[contador];
                contador++;
            }
            finalfila--;
        }

        // abajo a arriba
        if (iniciocolumna <= finalcolumna)
        {
            for (int i = finalfila; i >= iniciofila; i--)
            {
                A[i][iniciocolumna] = v[contador];
                contador++;
            }
            iniciocolumna++;
        }
    }

    int *p = &A[0][0];
    cout << endl;
    imprimirmatriz(p, m, n);
}