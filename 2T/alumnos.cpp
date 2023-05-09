#include <iostream>
#include <cstdlib> //Para usar rand
#include <ctime>   //Para usar time
using namespace std;

int enterosAleatorios()
{
    // Funcion que retorna numeros aleatorios del 0 al 100
    int x = 0 + rand() % (100 - 0 + 1);
    // limite inferior + rand()%(limitesuperior-limiteinferior+1)
    return x;
}

void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}

float calculoDePromedio(int vector[], int tam)
{
    float promedio = 0, suma = 0;

    for (int i = 0; i < tam; i++)
    {
        suma = suma + vector[i];
    }

    promedio = suma / tam;

    return promedio;
}

void inferiorAlPromedio(int vector[], int tam, float prom)
{

    int notasInf = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vector[i] < prom)
        {
            notasInf++;
        }
    }

    cout << "Hay " << notasInf << " notas inferior al promedio";
}

int main()
{
    /* Calcular la cantidad de alumnos que obtuvieron nota inferior al promedio del curso en
    cierta
    materia. Hay 20 alumnos, y todos rindieron. Las notas son números enteros que van del 0 al
    100 (se asume que todas las notas son correctas).
    */

    int alumnos[20];
    int tam = 20
    float promedio = 0;

    for (int i = 0; i < 20; i++)
    {
        alumnos[i] = enterosAleatorios();
    }

    cout << "Las notas son: " << endl;

    impresionDeVector(alumnos, 20);

    promedio = calculoDePromedio(alumnos, 20);
    cout << endl;
    cout << "El promedio es: " << promedio;
    inferiorAlPromedio(alumnos, tam, promedio);

    return 0;
}
