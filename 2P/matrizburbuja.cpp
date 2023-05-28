#include <iostream>
using namespace std;

void ordenamientoBurbuja(int *pt, int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        for (int j = 0; j < (tam - 1); j++)
        {
            if (*(pt + j) > *(pt + j + 1))
            {
                int aux = *(pt + j);
                *(pt + j) = *(pt + j + 1);
                *(pt + j + 1) = aux;
            }
        }
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

void cargaDeMatriz(int *x, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < cantElementos; i++)
    {

        cout << "Introducir el elemento nro " << i + 1 << ": ";
        cin >> *(x + i);
    }
}
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int A[m][n];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, m, n);
    int tam = m * n;
    ordenamientoBurbuja(pt, tam);
    imprimirMatriz(pt, m, n);

    return 0;
}