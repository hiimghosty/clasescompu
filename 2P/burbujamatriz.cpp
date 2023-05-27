#include <iostream>
using namespace std;
/* Declarar una matriz m *n, pedir al usuario que cargue los elementos
  pero solo validar si carga de forma ascendente, usar funciones xd*/
void cargarMatriz(int *p, int m, int n)
{

    for (int i = 0; i < m; i++)

    {
        for (int j = 0; j < n; j++)
        {
            do
            {
                cout << "Introducir el elemento nro: " << ((i * n + j) + 1);
                cin >> *(p + i * n + j);
            } while (*(p + i * n + j) < (*(p + i * n + j - 1)));
        }
    }
}

void imprimirMatriz(int *p, int m, int n)
{
    int cantElement = m * n;

    for (int i = 0; i < cantElement; i++)
    {
        cout << *(p + i) << " ";
        if ((i + 1) % n == 0)
            cout << endl;
    }
}

int main()
{

    int m, n;
    cout << "Introducir filas";
    cin >> m;
    cout << "Introducir columnas";
    cin >> n;

    int A[m][n];
    int *p = &A[0][0];
    cargarMatriz(p, m, n);
    imprimirMatriz(p, m, n);

    return 0;
}