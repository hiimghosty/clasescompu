#include <iostream>
using namespace std;
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

    int m, n;
    cout << "Introducir cantidad  de filas";
    cin >> m;
    cout << "Introducir cnatidad de columnas";
    cin >> n;
    int A[m][n];
    int tam = m * n;
    int V[tam];
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            V[contador] = A[i][j];
            contador++;
        }
    }
    ordenarBurbuja(V, tam);

    // CARACOL
    int inicioFila = 0, finalFila = m - 1;
    int inicioColumna = 0, finalColumna = n - 1;
    int contador = 0;
    while (inicioFila <= finalFila and inicioColumna <= finalColumna)
    {
        // Recorrer de izq a der
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = V[contador];
            contador++;
        }
        inicioFila++;

        // Recorrer de arriba a abajo
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = V[contador];
            contador++;
        }
        finalColumna--;

        // Recorrer de derecha a izq
        if (inicioFila <= finalFila)
        {
            for (int i = finalColumna; i >= inicioColumna; i--)
            {
                A[finalFila][i] = V[contador];
                contador++;
            }
            finalFila--;
        }

        // Recorrer de abajo a arriba
        if (inicioColumna <= finalColumna)
        {
            for (int i = finalFila; i >= inicioFila; i--)
            {
                A[i][inicioColumna] = V[contador];
                contador++;
            }
            inicioColumna++;
        }
    }

        return 0;
}