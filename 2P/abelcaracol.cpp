#include <iostream>
using namespace std;

int nroAleatorio()
{
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return 0 + rand() % ((10)) - 0 + 1;
}

void cargaDeMatriz(int *p, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < cantElementos; i++)
    {
        *(p + i) = nroAleatorio();
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

void cargarVector(int *pt, int tam, int V[])
{
    int contador = 0;
    for (int i = 0; i < tam; i++)
    {
        V[contador] = *(pt + i);
        contador++;
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
    int m, n;
    cout << "Filas:";
    cin >> m;
    cout << "Columnas:";
    cin >> n;
    int A[m][n];
    int *p = &A[0][0];
    int tam = m * m;
    int B[tam];
    cargaDeMatriz(p, m, n);
    imprimirMatriz(p, m, n);
    cargarVector(p, tam, B);
    ordenarBurbuja(B, tam);
    cout << "El vector ordenado es: "<<endl;
    imprimirVector(B,tam);

    int inicioFila = 0, finalFila = m - 1;
    int inicioColumna = 0, finalColumna = n - 1;
    int contador = 0;
    while (inicioFila <= finalFila and inicioColumna <= finalColumna)
    {
        // Izq a derecha
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = B[contador];
            contador++;
        }
        inicioFila++;

        // Arriba a abajo
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = B[contador];
            contador++;
        }
        finalColumna--;

        // Der a izq
        if (inicioFila <= finalFila)
        {
            for (int i = finalColumna; i >= inicioColumna; i--)
            {
                A[finalFila][i] = B[contador];
                contador++;
            }
            finalFila--;
        }

        //Abajo a arriba
        if(inicioColumna <= finalColumna){
            for (int i = finalFila; i >= inicioFila; i--)
            {
                A[i][inicioColumna] = B[contador];
                contador++;
            }
            inicioColumna++;
        }
    }

    cout << "La matriz caracol es:" <<endl;
    imprimirMatriz(p,m,n);
    return 0;
}