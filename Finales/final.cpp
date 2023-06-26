#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cmath>
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
    int x;
    cout << "--..-- Disparos al blanco --.--" << endl;
    cout << "1. Leer datos del tirador" << endl;
    cout << "2. Salida" << endl;
    cout << "Ingrese la opcion -> ";
    cin >> x;
    return x;
}

void leerNombreYApellido(Tirador t)
{
    cout << "Introducir nombre ";
    cin >> t.nombre;
    cout << t.nombre;
}

int nroAleatorio()
{
    return -9 + rand() % 21;
}

void cargaDePuntos(Punto p[], int cantDisparos)
{
    for (int i = 0; i < cantDisparos; i++)
    {
        p[i].a = abs(nroAleatorio());
        p[i].b = abs(nroAleatorio());
    }
    
}

void cargaDeDisparos(Punto p[], int disparos[], int cantDisparos){
    int contadorP = 0;
    for (int i = 0; i < cantDisparos*2; i++)
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
            leerNombreYApellido(t);
            int cantDisparos = 3;
            Punto p[3];
            Puntaje puntaje[3];

        }
    }
    return 0;
}