#include <iostream>
using namespace std;

void cargaDeMatriz(int *x, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < cantElementos; i++)
    {

        do
        {
            cout << "Introducir el elemento nro " << i + 1 << ": ";
            cin >> *(x + i);
        } while (*(x + i) < *(x + i - 1));
    }
}

void imprimirMatriz(int *p, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < cantElementos; i++)
    {
        cout << *(p + i) << " ";

        if ((i + 1) % n == 0)
            cout << endl;
    }
}

int main()
{
    /*Introducr m y n, decalrar una matriz, cargar los elementos de la matriz pero validar solo
    si estan siendo cargados de forma ascendente, usar punteros y funcnioes*/

    int m, n;
    cout << "FILAS:";
    cin >> m;
    cout << "COLUMNAS: ";
    cin >> n;
    int A[m][n];
    int *p = &A[0][0];
    cargaDeMatriz(p, m, n);
    imprimirMatriz(p, m, n);
    return 0;
}