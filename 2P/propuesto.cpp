#include <iostream>
using namespace std;

int nroAleatorio()
{
    return 0 + rand() % (10 - 0 + 1);
}

void cargarVector(int A[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        A[i] = nroAleatorio();
    }
}

int contarElementosPares(int A[], int tam)
{
    int cantidadPares = 0;
    for (int i = 0; i < tam; i++)
    {
        if (A[i] % 2 == 0)
            cantidadPares++;
    }
    return cantidadPares;
}

bool par(int x)
{
    if (x % 2 == 0)
        return true;
    return false;
}

void cargarVectores(int A[], int pares[], int impares[], int tam)
{
    int contadorPares = 0;
    int contadorImpares = 0;
    for (int i = 0; i < tam; i++)
    {
        if (par(A[i]))
        {
            pares[contadorPares] = A[i];
            contadorPares++;
        }

        else
        {
            impares[contadorImpares] = A[i];
            contadorImpares++;
        }
    }
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

    /*Dado un vector aleatorio, de dimensino N cargada por el usuariom, edir al usuario que ingrese una
    posicon i, y poner en orden ascendente a la derecha todos los elemtnos paroes
    y a la izquierda los impares*/
    int tam;
    cout << "Introducir tamanho del vector" << endl;
    cin >> tam;
    int A[tam], cantPares;
    cargarVector(A,tam);
    cout << "El vector original es: "<<endl;
    impresionDeVector(A,tam);
    cantPares = contarElementosPares(A, tam);
    int cantImpares = tam - cantPares;
    int vectorPares[cantPares];
    int vectorImpares[cantImpares];
    cout << "El vector de los pares es:" << endl;
    impresionDeVector(vectorPares, cantPares);
    cout << "El vector de los impares es " << endl;
    impresionDeVector(vectorImpares, cantImpares);
    return 0;
}