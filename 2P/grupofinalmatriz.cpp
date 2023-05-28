#include <iostream>
#include <cstdlib>
// Matriz ordenada por cuadrantes pero con punteros
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
    // Va de 0 a 2*n-1
    int x = 0 + rand() % ((2 * (n - 1)) - 0 + 1);
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return x;
}

void cargaDeMatriz(int *x, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < (cantElementos); i++)
    {
        *(x + i) = nroAleatorio(n);
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

void imprimirVector(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}

void Cuadrante2(int *pt, int Q2[], int N)
{

    int contador = 0;
    int limite = ((N / 2) * N + (N / 2));
    for (int i = 0; i < limite; i++)
    {
        Q2[contador] = *(pt + i);
        contador++;
        if ((i + 1) % (N / 2) == 0)
            i += N / 2;
    }
}

int main()
{
    srand(time(NULL));
    int N;
    N = validarN();
    int A[N][N];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, N, N);
    imprimirMatriz(pt, N, N);
    cout << endl;

    int tam = N / 2 * N / 2;
    int Q2[tam];
    Cuadrante2(pt, Q2, N);
    cout << "El vector Q2 es"<<endl;
    imprimirVector(Q2,tam);
    return 0;
}