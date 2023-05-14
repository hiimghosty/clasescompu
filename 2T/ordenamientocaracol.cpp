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
    /*Ingrese la dimension de filas m
    y columnas n de una matriz, generar una
    matriz de orden mxn ordenada de forma caracol
    */
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
    // Ordenamos el vector con insertionsort
    insertionSort(B, x);
    int inicioFila = 0, finalFila = m - 1;
    int inicioColumna = 0, finalColumna = n - 1;
    contador = 0;
    while (inicioFila <= finalFila and inicioColumna <= finalColumna)
    {
        // Recorrer de izquierda a derecha
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = B[contador];
            contador++;
        }
        inicioFila++;

        // Moverme de arriba abajo en la columna derecha
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = B[contador];
            contador++;
        }
        finalColumna--;

        // Movernos de derecha a izquierda
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

    // Imprimr la matriz
    cout << endl;
    cout <<"El ordenamiento caracol es: "<< endl;
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