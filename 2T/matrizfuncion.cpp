#include <iostream>
#include <cstdlib>

using namespace std;
void menorElementoFila(int A[], int m, int mPrecios[], int mProveedores[], int contador)
{
    int Precio = A[0];
    int Proveedor = 0;

    for (int i = 0; i < m; i++)
    {
        if (A[i] < Precio)
        {
            Precio = A[i];
            Proveedor = i;
        }
    }
    mPrecios[contador] = Precio;
    mProveedores[contador] = Proveedor+1;
}
void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}
int main()
{
    int m, n;
    cout << "Introducir cantidad de materiales";
    cin >> m;
    cout << "Introducir cantidad de proveedores";
    cin >> n;
    int A[m][n];
    // Cargar la matriz
    //  Cargar matriz con numeros aleatorios entre el 0 y 10
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }
    cout << endl
         << "La matriz de precios y proveedores entera es: " << endl;
    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    int mPrecios[m];     // Areglo con los mejores precios
    int mProveedores[m]; // Arreglo con los mejores proveedores
    for (int i = 0; i < m; i++)
    {

        menorElementoFila(A[i], m, mPrecios, mProveedores, i);
    }
    cout << "Los mejores precios son: " << endl;
    impresionDeVector(mPrecios, m);
    cout << "Los mejores proveedores son: " << endl;
    impresionDeVector(mProveedores, m);
    return 0;
}