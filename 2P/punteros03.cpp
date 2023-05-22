#include <iostream>
using namespace std;

void cargaDeMatriz(int *A, int m, int n)
{
    int elementos = m * n;

    for (int i = 0; i < elementos; i++)
    {
        do
        {
            cout << "Introducir el elemento numero " << i+1 << " ";
            cin >> *(A + i);
        } while (*(A + i) < *((A + i) - 1));
    }
}
void imprimirMatriz(int *A, int m, int n)
{
    int elementos = m * n;

    for (int i = 0; i < elementos; i++)
    {
        cout << *(A + i) << " ";
        if ((i + 1) % 3 == 0){
            cout << endl;
        }
    }
}

int main()
{
    /*Elabore un programa que pida al usuario las dimensiones de una matriz MxN y luego
    pida al usuario que introduzca los elementos de la matriz en orden ascendente, luego
    imprima la matriz (para todo utilice punteros).*/
    int m, n;

    cout << "Introducir la cantidad de filas ";
    cin >> m;
    cout << "Introducir cantidad de columnas ";
    cin >> n;

    int A[m][n];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, m, n);
    imprimirMatriz(pt,m,n);
    return 0;
}