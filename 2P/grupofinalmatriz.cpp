#include <iostream>
#include <cstdlib>
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
int main()
{
    srand(time(NULL));
    int N;
    N = validarN();
    int A[N][N];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, N, N);
    imprimirMatriz(pt, N, N);

    int tam = N / 2 * N / 2;
    int Q2[tam];
    // Vuelvo el segundo cuadrante en el vector
    int contadorQ2 = 0;
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            Q2[contadorQ2] = A[i][j];
            contadorQ2++;
        }
    }

    ordenarBurbuja(Q2, tam);
    cout << "El Q2 ordenado es: " << endl;
    imprimirVector(Q2, tam);
    // Cargo el vector ordenado en la matriz
    contadorQ2 = 0;
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            A[i][j] = Q2[contadorQ2];
            contadorQ2++;
        }
    }
    cout << "La matriz con el segundo cuadrante ordenado es:"<<endl;
    imprimirMatriz(pt,N,N);

    return 0;
}