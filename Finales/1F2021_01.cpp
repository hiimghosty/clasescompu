#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <math.h>
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
    cout << "--.-- Disparos al blanco --.--" << endl;
    cout << "1.Leer datos de Tirador" << endl;
    cout << "2.Salir" << endl;
    cout << "Seleccione la opcion -> ";
    cin >> opcion;
    return opcion;
}

int nroAleatorio()
{
    int x = (-10 + rand() % (10 + 10 + 1));
    return x;
}

void generarPuntaje(Punto p[], int disparos)
{
    // Cargar el valor absoluto de los numeros generados
    for (int i = 0; i < disparos; i++)
    {
        p[i].a = abs(nroAleatorio());
        p[i].b = abs(nroAleatorio());
    }
}

void cargarDisparos(Punto p[], int disparos[], int cantD)
{
    int contadorP = 0;
    for (int i = 0; i < cantD * 2; i++)
    {
        disparos[i] = p[contadorP].a;
        i++;
        disparos[i] = p[contadorP].b;
        contadorP++;
    }
}

void leerNombreyApellido(Tirador t)
{
    cout << "Ingresar el nombre del tirador:";
    fflush(stdin);
    cin.getline(t.nombre, 20, '\n');
}

void calculoDePuntajes(Puntaje p[], Punto punto[], int cantD)
{
 /*Recibe puntaje p, que almacena las coordeandas a y b de todos los disparos
    Recibe Punto p, que almacena el puntaje (que calcularemos ahora con el radio) con la denominacion
    Recibe cantD que seria la cantidad de disparos */
    /*Calculamos el radio para cada disparo, con ello le asignamos un puntaje y una denominacion a cada
    elemento del vector p*/
    int R = 0;
    for (int i = 0; i < cantD; i++)
    {
        R = sqrt(pow(punto[i].a, 2) + pow(punto[i].b, 2)); // math.h requerido
        if (R >= 0 and R < 2)
        {
            strcpy(p[i].denominacion, "CENTRO"); // cstring requerido para usar strcpy
            p[i].puntaje = 10;
        }

        if (R >= 2 and R < 4)
        {
            strcpy(p[i].denominacion, "MEDIA");
            p[i].puntaje = 8;
        }

        if (R >= 4 and R < 6)
        {
            strcpy(p[i].denominacion, "EXTERNA");
            p[i].puntaje = 5;
        }

        if (R >= 6 and R <= 10)
        {
            strcpy(p[i].denominacion, "BORDE");
            p[i].puntaje = 1;
        }

        if (R > 10)
        {
            strcpy(p[i].denominacion, "FUERA");
            p[i].puntaje = 0;
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
            leerNombreyApellido(t);
            int cantidadDeDisparos = 3;
            Punto punt[cantidadDeDisparos];
            cargarDisparos(punt, t.disparos, cantidadDeDisparos);
            Puntaje puntajes[cantidadDeDisparos];
            calculoDePuntajes(puntajes, punt, cantidadDeDisparos);
        }
    }
    return 0;
}