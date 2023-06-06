#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*Escribir un programa en C++ que genere de manera aleatoria 60 números enteros
(en el intervalo [0, 99]) y los cargue en un vector. El programa debe:
Ordenar los elementos en las posiciones 0, 3, 6, … , 54, 57 en forma ascendente.
Ordenar los elementos en las posiciones 1, 4, 7, … , 55, 58 en forma descendente.
Obtener la suma de los elementos en las posiciones 2, 5, 8, … , 56, 59.
Se debe mostrar en pantalla esta suma, así como el vector resultante*/
void burbuja(int a[], int n)
{
    int aux;
    for (int i = 0; i < n / 3; i++)
    {
        for (int j = 0; j < n - 3; j = j + 3)
        {
            if (a[j] > a[j + 3])
            {
                aux = a[j];
                a[j] = a[j + 3];
                a[j + 3] = aux;
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
    int n = 60;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
    cout << "El vector original es: " << endl;

    imprimirVector(A, n);
    int suma = 0;
    for (int i = 2; i < n; i = i + 3)
    {
        suma = suma + A[i];
    }
    cout << suma;
    burbuja(A, n);
    cout << endl
         << "El vector ordenado es: " << endl;
    imprimirVector(A, n);
    return 0;
}
