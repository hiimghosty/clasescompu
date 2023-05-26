#include <iostream>
using namespace std;

int validarN()
{

    float x;
    do
    {
        cout << "Introducir N entero, par y mayor que 3: ";
        cin >> x;
    } while (x != int(x) or (int(x) % 2) != 0 or x < 3);
    return x;
}

int nroAleatorio(int n)
{

    return 0 + rand() % ((2 * (n - 1)) - 0 + 1);
}

void cargaDeMatriz(int *p, int n)
{

    int cantElementos = n * n;
    for (int i = 0; i < cantElementos; i++)
    {
        *(p + i) = nroAleatorio(n);
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

    int N;
    N = validarN();
    int A[N][N];
    int *p = &A[0][0];
    cargaDeMatriz(p, N);
    imprimirMatriz(p, N, N);
    return 0;
}