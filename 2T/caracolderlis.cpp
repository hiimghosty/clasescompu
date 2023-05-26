#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ordenarBurbuja(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
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

void imprimirVector(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
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
int main()
{
    srand(time(NULL));
    int m, n;
    cout << "Introducir cantidad de filas";
    cin >> m;
    cout << "Introducir cantidad de columnas";
    cin >> n;
    int A[m][n];

    // Cargamos numeros aleatorios en la matriz de 0 a 10
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = (0 + rand() % (10 - 0 + 1));
        }
    }

    // Imprimimos la matriz
    int *p = &A[0][0];
    imprimirMatriz(p, m, n);

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
    ordenarBurbuja(B, x);
    cout << "El vector ordenado es: ";
    imprimirVector(B, x);

    int inicioFila = 0, finalFila = m - 1;
    int inicioColumna = 0, finalColumna = n - 1;
    contador = 0;
    while (inicioFila <= finalFila and inicioColumna <= finalColumna)
    {
        // Izquierda a derecha
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = B[contador];
            contador++;
        }
        inicioFila++;

        // Arriba a abajo
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = B[contador];
            contador++;
        }
        finalColumna--;

        // Derecha a izquierda
        if (inicioFila <= finalFila)
        {
            for (int i = finalColumna; i >= inicioColumna; i--)
            {
                A[finalFila][i] = B[contador];
                contador++;
            }
            finalFila--;
        }
        // Moverme de abajo a arriba
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

    cout << "La matriz caracol es:" << endl;
    imprimirMatriz(p, m, n);

    return 0;
}