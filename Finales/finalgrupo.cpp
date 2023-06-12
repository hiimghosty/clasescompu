#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
using namespace std;

struct Puntaje
{
    char denominacion[7];
    unsigned short puntaje;
};

struct Punto
{
    unsigned short a;
    unsigned short b;
};

struct Tirador
{
    char nombre[20];
    int disparos[6];
};

int mostrarMenu()
{
    int opcion;
    cout << "--.-- Disparos al blanco --.-- " << endl;
    cout << "1. Leer datos de Tirador" << endl;
    cout << "2.Salir" << endl;
    cout << "Selecione la opcion -> ";
    cin >> opcion;
    return opcion;
}

void leerNombreyApellido(Tirador t)
{
    cout << "Ingrese el nombre del tirador: ";
    fflush(stdin);
    cin.getline(t.nombre, 20, '\n');
    cout << t.nombre;
}

int nroAleatorio()
{
    return (-10 + rand() % (10 + 10 + 1));
}

void generarPuntaje(Punto punto[], int cantD)
{
    for (int i = 0; i < cantD; i++)
    {
        punto[i].a = abs(nroAleatorio());
        punto[i].b = abs(nroAleatorio());
    }
}

void cargarDisparos(Punto p[], int disparos[], int cantD)
{
    int contadorP = 0;
    for (int i = 0; i < (cantD * 2); i++)
    {
        disparos[i] = p[contadorP].a;
        i++;
        disparos[i] = p[contadorP].b;
        contadorP++;
    }
}

void calculoDePuntaje(Puntaje puntaje[], Punto punto[], int cantD)
{
    int R = 0;

    for (int i = 0; i < cantD; i++)
    {
        R = sqrt(pow(punto[i].a, 2) + pow(punto[i].b, 2));

        if (R >= 0 and R < 2)
        {
            strcpy(puntaje[i].denominacion, "CENTRO"); // cstring requerido para usar strcpy
            puntaje[i].puntaje = 10;
        }

        if (R >= 2 and R < 4)
        {
            strcpy(puntaje[i].denominacion, "MEDIA");
            puntaje[i].puntaje = 8;
        }

        if (R >= 4 and R < 6)
        {
            strcpy(puntaje[i].denominacion, "EXTERNA");
            puntaje[i].puntaje = 5;
        }

        if (R >= 6 and R <= 10)
        {
            strcpy(puntaje[i].denominacion, "BORDE");
            puntaje[i].puntaje = 1;
        }

        if (R > 10)
        {
            strcpy(puntaje[i].denominacion, "FUERA");
            puntaje[i].puntaje = 0;
        }
    }
}

int hallarPosMejor(Puntaje p[], int cantD)
{
    int posMejor = 0;
    int mejorPuntaje = p[0].puntaje;
    for (int i = 0; i < cantD; i++)
    {
        if (p[i].puntaje > mejorPuntaje)
        {
            mejorPuntaje = p[i].puntaje;
            posMejor = i;
        }
    }
    return posMejor;
}

void imprimirTODO(Tirador t, int cantD, int mejorPuntaje, char denominacion[])
{
    cout << endl;
    cout << "Disparos: " << endl;
    for (int i = 0; i < (cantD * 2); i++)
    {
        cout << t.disparos[i] << ",";
        i++;
        cout << t.disparos[i] << endl;
    }

    cout << "Mejor tiro: ";
    cout << denominacion << " ";
    cout << mejorPuntaje << endl;
}

int main()
{
    srand(time(NULL));
    int opc = 0;
    while (opc != 2)
    {
        opc = mostrarMenu();

        if (opc == 1)
        {
            Tirador t;
            leerNombreyApellido(t);
            int cantidadDeDisparos = 3;
            Punto punto[cantidadDeDisparos];
            generarPuntaje(punto, cantidadDeDisparos);
            cargarDisparos(punto, t.disparos, cantidadDeDisparos);
            Puntaje puntajes[cantidadDeDisparos];
            calculoDePuntaje(puntajes, punto, cantidadDeDisparos);
            int posMejor = hallarPosMejor(puntajes, cantidadDeDisparos);
            imprimirTODO(t, cantidadDeDisparos, puntajes[posMejor].puntaje, puntajes[posMejor].denominacion);
        }
    }

    return 0;
}