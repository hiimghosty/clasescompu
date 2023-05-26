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

void cuadrante1(int *p, int vector[], int N)
{
    int contador = 0;
    int limite = (N / 4) * N + (N / 2);
    for (int i = 0; i < limite; i++)
    {
        vector[contador] = *(p + i);
        contador++;
        if (((i + 1) % (N / 2) == 0))
            i += N / 2;
    }
}

void cargarCuadrante1(int *p, int vector[], int N)
{
    int contador = 0;
    int limite = (N / 4) * N + (N / 2);
    cout << "El limite es: " << limite;
    for (int i = 0; i < limite; i++)
    {
        *(p + i) = vector[contador];
        contador++;
        if (((i + 1) % (N / 2) == 0))
            i += N / 2;
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

    int N;
    N = validarN();
    int A[N][N];
    int *p = &A[0][0];
    cargaDeMatriz(p, N);
    cout << "La matriz original es: " << endl;
    imprimirMatriz(p, N, N);
    int tam = (N / 2) * (N / 2);
    int vector1[tam];
    cuadrante1(p, vector1, N);
    int sum1 = 0;
    sum1 = sumaDeElementos(vector1, tam);
    cout << "El primer cuadrante volcado es: " << endl;
    imprimirVector(vector1, tam);
    ordenarBurbuja(vector1, tam);
    cout << "La matriz ordenada por cuadrantes [solo cuadrante1]" << endl;
    cargarCuadrante1(p, vector1, N);
    imprimirMatriz(p, N, N);
    cout << "La suma de los elemtnos del primer cuadrante es: " << sum1;
    return 0;
}