#include <iostream>
using namespace std;
int validar()
{
    float x;
    do
    {
        cout << "Introducir un numero entero positivo menor a 100 ";
        cin >> x;
    } while (int(x) != x or x > 100 or x < 0);
    return x;
}

int sumaDeVector(int *pt, int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + *(pt + i);
    }
    return suma;
}

void cargaDeVector(int *pt, int n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> *(pt + i);
    }
}

int main()
{
    /* Elabore un programa que reciba la dimensión y luego los datos de un vector (números
enteros positivos menores a 100), luego que una función devuelva la suma de todos
los valores del vector */

    int n, suma;
    n = validar();
    int A[n];
    int *pt = &A[0];
    cargaDeVector(pt, n);
    suma = sumaDeVector(pt, n);
    cout << "La suma de los componentes es: " << suma;
    return 0;
}