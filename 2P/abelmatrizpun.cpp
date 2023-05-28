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
// Q2
void cargarQ2(int *pt, int N, int Q2[])
{
    int contador = 0;
    int limite = ((N / 2) * N + (N / 2));
    for (int i = 0; i < limite; i++)
    {
        Q2[contador] = *(pt + i);
        contador++;
        if ((i + 1) % (N / 2) == 0)
        {
            i += N / 2;
        }
    }
}

void cargarCuadrante2(int *pt, int N, int Q2[])
{
    int contador = 0;
    int limite = ((N / 2) * N + (N / 2));
    for (int i = 0; i < limite; i++)
    {
        *(pt + i) = Q2[contador];
        contador++;
        if ((i + 1) % (N / 2) == 0)
        {
            i += N / 2;
        }
    }
}

// Q1
void cargarQ1(int *pt, int N, int Q1[])
{
    int contador = 0;
    int limite = (N / 2) * N;
    for (int i = N / 2; i < limite; i++)
    {
        Q1[contador] = *(pt + i);
        contador++;
        if ((i + 1) % (N) == 0)
        {
            i += N / 2;
        }
    }
}

void cargarCuadrante1(int *pt, int N, int Q1[])
{
    int contador = 0;
    int limite = (N / 2) * N;
    for (int i = N / 2; i < limite; i++)
    {
        *(pt + i) = Q1[contador];
        contador++;
        if ((i + 1) % (N) == 0)
        {
            i += N / 2;
        }
    }
}
// Q3
void cargarQ3(int *pt, int N, int Q3[])
{
    int contador = 0;
    int limite = N * N - (N / 2);
    for (int i = (N / 2) * N; i < limite; i++)
    {
        Q3[contador] = *(pt + i);
        contador++;
        if ((i + 1) % (N / 2) == 0)
        {
            i += N / 2;
        }
    }
}

void cargarCuadrante3(int *pt, int N, int Q3[])
{
    int contador = 0;
    int limite = N * N - (N / 2);
    for (int i = (N / 2) * N; i < limite; i++)
    {
        *(pt + i) = Q3[contador];
        contador++;
        if ((i + 1) % (N / 2) == 0)
        {
            i += N / 2;
        }
    }
}
// Q4
void cargarQ4(int *pt, int N, int Q4[])
{
    int contador = 0;
    int limite = N * N;
    for (int i = ((N * N) / 2) + (N / 2); i < limite; i++)
    {
        Q4[contador] = *(pt + i);
        contador++;
        if (((i + 1) % N == 0))
        {
            i += N / 2;
        }
    }
}

void cargarCuadrante4(int *pt, int N, int Q4[])
{
    int contador = 0;
    int limite = N * N;
    for (int i = ((N * N) / 2) + (N / 2); i < limite; i++)
    {
        *(pt + i) = Q4[contador];
        contador++;
        if (((i + 1) % N == 0))
        {
            i += N / 2;
        }
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
    int tam = (N / 2) * (N / 2);
    // Q2
    int Q2[tam];
    cargarQ2(pt, N, Q2);
    ordenarBurbuja(Q2, tam);
    cargarCuadrante2(pt, N, Q2);
    // Q1
    int Q1[tam];
    cargarQ1(pt, N, Q1);
    ordenarBurbuja(Q1, tam);
    cargarCuadrante1(pt, N, Q1);
    // Q3
    int Q3[tam];
    cargarQ3(pt, N, Q3);
    ordenarBurbuja(Q3, tam);
    cargarCuadrante3(pt, N, Q3);
    // Q4
    int Q4[tam];
    cargarQ4(pt, N, Q4);
    ordenarBurbuja(Q4, tam);
    cargarCuadrante4(pt,N,Q4);
    cout <<"La matriz totalmente ordenada por cuadrantes es: "<<endl;
    imprimirMatriz(pt,N,N);

    return 0;
}