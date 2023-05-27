#include <iostream>
// #include<cstdlib>
// #include<ctime>
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

void cargaDeElementosMatriz(int *p, int m, int n)
{
    int cantElementos = m * n;
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
void imprimirVector(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
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
int sumaDeElementos(int A[], int tam)
{
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma = suma + A[i];
    }
    return suma;
}
int main()
{
    // srandt(time(NULL));
    int N;
    N = validarN();
    int A[N][N];
    int *pt = &A[0][0];
    cargaDeElementosMatriz(pt, N, N);
    imprimirMatriz(pt, N, N);
    int tam = ((N / 2) * (N / 2));
    int Q2[tam];
    int contadorQ2 = 0;
    for (int i = 0; i < (N / 2); i++)
    {
        for (int j = 0; j < (N / 2); j++)
        {
            Q2[contadorQ2] = A[i][j];
            contadorQ2++;
        }
    }
    ordenarBurbuja(Q2, tam); // Q2 YA ESTA ORDENADO
    cout << "El vector Q2 ordenado es" << endl;
    imprimirVector(Q2, tam);
    // Aca cargo el cuadrante en la matriz
    contadorQ2 = 0;
    for (int i = 0; i < (N / 2); i++)
    {
        for (int j = 0; j < (N / 2); j++)
        {
            A[i][j] = Q2[contadorQ2];
            contadorQ2++;
        }
    }
    cout << "La matriz ordenada es: " << endl;
    imprimirMatriz(pt, N, N);
    int sum2 = 0;
    sum2 = sumaDeElementos(Q2, tam);
    cout << "La suma de elementos del Q2 es" <<sum2;
    return 0;
}