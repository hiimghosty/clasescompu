#include <iostream>
#include <cstdlib>
using namespace std;

int validar()
{
    float x;
    do
    {
        cin >> x;
    } while (x != int(x) or x < 0);

    return x;
}

void cargaDeNotas(int notas[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        notas[i] = 0 + rand() % (5 - 0 + 1);
    }
}

void impresionDeVector(int vector[], int tam)
{
    cout << "El vector notas es: ";
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

void mayorNota(int vector[], int tam)
{
    int mayor = vector[0];
    for (int i = 0; i < tam; i++)
    {
        if (mayor < vector[i])
            mayor = vector[i];
    }

    cout << "La mayor nota es: " << mayor << endl;
}

void promedio(int vector[], int tam)
{
    float suma = 0, promedio;
    for (int i = 0; i < tam; i++)
    {
        suma += vector[i];
    }

    promedio = suma / tam;
    cout << "El promedio es " << promedio;
}

void peorNota(int vector[], int tam)
{
}

void segundaPeorNota(int vector[], int tam)
{

    int peor = vector[0];
    int segundapeor = vector[0];

    for (int i = 0; i < tam; i++)
    {

        if (peor > vector[i])
        {
            peor = vector[i];
        }

        if (segundapeor > vector[i] and peor < vector[i])
        {
            segundapeor = vector[i];
        }
    }

    cout << "El segundo peor es " << segundapeor;
}

int main()
{

    /* escribir un programa donde yo pueda cargar las notas de  n alumnos,
    siendo n positivo y entero (validar) e imprimir el promedio, la mayor nota
    y la menor nota, segunda peor nota */

    cout << "Introducir numero de alumnos";
    int n;
    n = validar();

    int notas[n];
    cargaDeNotas(notas, n);
    impresionDeVector(notas, n);
    mayorNota(notas, n);
    cout << endl;
    promedio(notas, n);
    cout << endl;
    segundaPeorNota(notas,n);
    return 0;
}