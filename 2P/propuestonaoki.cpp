#include <iostream>
using namespace std;

void ordenamientoPrimeraMitadAscendente(int *pt, int tam)
{
    for (int i = 0; i < (((tam*tam)/2)-1); i++)
    {
        for (int j = 0; j < (((tam*tam)/2)-1); j++)
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

int nroAleatorio()
{
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return 0 + rand() % (10 - 0 + 1);
}

void cargaMatriz(int *A, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *(A + i) = nroAleatorio();
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
    cout << "Introducir n" << endl;
    int n;
    cin >> n;
    int A[n][n];
    int tam = n * n;
    int *pt = &A[0][0];
    cargaMatriz(pt, tam);
    imprimirMatriz(pt, n, n);
    ordenamientoPrimeraMitadAscendente(pt,n);
    cout << endl << "Matriz ordenada" << endl;
    imprimirMatriz(pt,n,n);


    return 0;
}