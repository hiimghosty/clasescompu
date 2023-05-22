#include <iostream>
#include <cstdlib>
using namespace std;

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
         << "La matriz de proveedores y materiales es: " << endl;
    // Imprimir la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // Necesitamos almacenar los mejores proveedores para x materiales
    int mProveedores[m];
    // Necesitamos almacenar los mejores precios para x materiales
    int mPrecios[m];

    int mPrecio, mProveedor;
    int contador = 0;
    for (int i = 0; i < m; i++)
    {
        // ACA ESTOY ANTES DE LA PRIMERA FILA
        mPrecio = A[i][0]; // primer elemento de la fila actual
        mProveedor = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] < mPrecio)
            {
                mPrecio = A[i][j];
                mProveedor = j;
            }
        }
        // LLLEGO HASTA ACA
        mProveedores[contador] = (mProveedor+1);
        mPrecios[contador] = mPrecio;
        contador++;
    }
    cout << "Los mejores proveedores son: " << endl;
    impresionDeVector(mProveedores, m);
    cout << "Los mejores precios son: " << endl;
    impresionDeVector(mPrecios, m);
    return 0;
}