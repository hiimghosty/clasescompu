#include <iostream>
using namespace std;

int nroAleatorio()
{
    // limiteinf+rand()%(limitesup-limiteinferior+1)
    return 0 + rand() % (10 - 0 + 1);
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

int main()
{
    int m, n;
    cout << "Ingresar m y n" << endl;
    cin >> m;
    cin >> n;
    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = nroAleatorio();
        }
    }

    // volcamos
    int tam = m * n;
    int V[tam];
    int contador = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            V[contador] = A[i][j];
            contador++;
        }
    }
    ordenarBurbuja(V, tam);

    // CARACOL
    int inicioFila = 0, finalFila = m - 1;
    int inicioColumna = 0, finalColumna = n - 1;
    contador = 0;
    while (inicioFila <= finalFila and inicioColumna <= finalColumna)
    {
        // Recorremos de izq a derecha
        for (int i = inicioColumna; i <= finalColumna; i++)
        {
            A[inicioFila][i] = V[contador];
            contador++;
        }
        inicioFila++;

        // Recorremos de arriba a abajo
        for (int i = inicioFila; i <= finalFila; i++)
        {
            A[i][finalColumna] = V[contador];
            contador++;
        }
        finalColumna--;

        // Recorrremos de derecha a izq
        if (inicioFila <= finalFila)
        {
            for (int i = finalColumna; i >= inicioColumna; i--)
            {
                A[finalFila][i] = V[contador];
                contador++;
            }
            finalFila--;
        }
        // Recorremos de abajo a arriba
        if (inicioColumna <= finalColumna)
        {
            for (int i = finalFila; i >= inicioFila; i--)
            {
                A[i][inicioColumna] = V[contador];
                contador++;
            }
            inicioColumna++;
        }
    }
    cout << endl
         << "La matriz caracol es: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}