#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int validar()
{
    float x;
    do
    {
        cin >> x;
    } while (x != int(x) or (x < 2 or x > 10));

    return x;
}

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
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
int main()
{
    srand(time(NULL));
    /*Lea dos números enteros m y n, mayores o iguales a 2 y menores o iguales a 10. Luego
cargue una matriz A[m][n] a través del teclado. Muestre en pantalla la matriz cargada.
Ordene las componentes de la diagonal principal de la matriz en forma ascendente. Por
último, muestre en pantalla la matriz con las componentes de su diagonal ordenadas.*/
    int m, n;
    cout << "Introducir numero de filas (entero, y entre 2 y 10)";
    m = validar();
    cout << "Introducir numero de columnas (entero, y entre 2 y 10)";
    n = validar();
    int A[m][n];
    // Cargo la matriz con numeros aleatorios
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (100 - 0 + 1); // enteros entre 0 y 10
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

    int B[m];
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                B[contador] = A[i][j];
                contador++;
            }
        }
    }

    cout << "Vector de los lementos de la diagonal principal" << endl;
    impresionDeVector(B, m);
    insertionSort(B, m);
    contador = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                A[i][j] = B[contador];
                contador++;
            }
        }
    }

    // Imprimir la matriz
    cout << "La matriz ordenada es: " << endl;
    for (int i = 0; i < m; i++)j
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " "; // enteros entre 0 y 10
        }
        cout << endl;
    }
    return 0;
}