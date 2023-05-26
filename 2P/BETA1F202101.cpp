#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
/*Otra version del codigo de este final, es la que use para pasar
NO ESTOY MUY ORGULLOSO DE ESTE CODIGO, ES FEO
Pero pase con 5 kkk*/
struct Puntaje
{
    char denominacion[7];
    unsigned short puntaje;
};

struct Punto
{
    unsigned short a, b;
};

struct Tirador
{
    char nombre[20];
    float disparos[6]; // Usamos 6 porque son 3 disparos y cada disparo tiene un par de coordenadas.
};

int nroAleatorio()
{

    int n;
    n = rand() % (10 - (-10) + 1) - 10;
    return n;
}
Tirador cargaDeTirador()
{
    Tirador t;
    fflush(stdin); // Esto usamos para evitar errores de memoria al usar 'ENTER'
    cout << "Ingrese el nombre del tirador: ";
    cin.getline(t.nombre, 20);
    // Ahora en el vector disparos cargamos los numeros aleatorios;
    for (int i = 0; i < 6; i++)
    {

        t.disparos[i] = nroAleatorio(); // Esta es la diferencia principal, cargo
                                        // Los numeros aleatorios aca en vez de en punto
    }
    return t;
}
void imprimirTirador(Tirador t, Puntaje p)
{
    // Con esta funcion imprimiremos todo lo que nos pide el ejericio, por ende la llamaremos al final
    cout << t.nombre << endl;
    cout << "Disparos: " << endl;

    cout << t.disparos[0] << "," << t.disparos[1] << endl;
    cout << t.disparos[2] << "," << t.disparos[3] << endl;
    cout << t.disparos[4] << "," << t.disparos[5] << endl;

    cout << "Mejor tiro: ";
    cout << p.denominacion << " ";
    cout << p.puntaje << endl;
}
Punto cargadePunto(Tirador t, int i)
{
    Punto p; // Esta funcion carga cada punto con el numero aleatorio previamente cargado

    p.a = t.disparos[i];
    p.b = t.disparos[i + 1];

    return p;
}
Puntaje calculodePuntaje(Punto p)
{
    Puntaje punt; // Esta funcion calcula cada puntaje con su respectiva denominacion
    int R = 0;

    R = sqrt(pow(p.a, 2) + pow(p.b, 2));

    if (R >= 0 and R < 2)
    {
        strcpy(punt.denominacion, "CENTRO");
        punt.puntaje = 10;
    }

    if (R >= 2 and R < 4)
    {
        strcpy(punt.denominacion, "MEDIA");
        punt.puntaje = 8;
    }

    if (R >= 4 and R < 6)
    {
        strcpy(punt.denominacion, "EXTERNA");
        punt.puntaje = 5;
    }

    if (R >= 6 and R <= 10)
    {
        strcpy(punt.denominacion, "BORDE");
        punt.puntaje = 1;
    }

    if (R > 10)
    {
        strcpy(punt.denominacion, "FUERA");
        punt.puntaje = 0;
    }

    return punt;
}
int hallarPosMejor(Puntaje p[])
{
    // Esta funcion halla la posicion del mejor puntaje
    int PosMejor = 0;
    Puntaje aux = p[0];
    for (int i = 0; i < 3; i++)
    {
        if (aux.puntaje < p[i].puntaje)
        {
            aux = p[i];
            PosMejor = i;
        }
    }
    return PosMejor;
}
int main()
{
    // Primero desplegamos el menu
    int opcion = 0;
    srand(time(NULL)); // Esto uso para la aleatoreidad
    Tirador t;         // Con esto creo un solo tirador
    Punto p[3];        // Aqui considero 3 puntos y por ende 3 puntajes
    Puntaje punt[3];
    int mejorpos; // Esto uso para luego imprimir directamente el mejor puntaje
    while (opcion != 2)
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            t = cargaDeTirador();
            int j = 0;
            for (int i = 0; i < 3; i++)
            {

                p[i] = cargadePunto(t, j);
                j += 2;
            }

            for (int i = 0; i < 3; i++)
            {
                punt[i] = calculodePuntaje(p[i]);
            }
            mejorpos = hallarPosMejor(punt);
            imprimirTirador(t, punt[mejorpos]);

            break;
        }
    }

    return 0;
}