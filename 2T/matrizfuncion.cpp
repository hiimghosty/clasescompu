#include <iostream>
#include <cstdlib>

using namespace std;
//RESOLVER CON FUNCIONES
void menorElementoFila(int A[], int m)
{
    cout << "La fila es: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int m, n;
    cout << "Introducir cantidad de materiales";
    cin >> m;
    cout << "Introducir cantidad de proveedores";
    cin >> n;
    int A[m][n];
    // Cargar la matriz
    //  Cargar matriz con numeros aleatorios entre el 0 y 10
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }
    cout << endl
         << "La matriz entera es: " << endl;
    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    menorElementoFila(A[0], m);
    return 0;
}