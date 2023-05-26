#include <iostream>
#include <cstdlib>
#include <ctime>
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

void leerNombreyApellido(Tirador t)
{ /*Lee nombre completo del usuario, usamos fflush porque si no, rip*/
    /*Bueno, usamos fflush porque usamos un cin anteriormente(En el main)*/
    cout << "Ingrese el nombre del Tirador: ";
    fflush(stdin);
    cin.getline(t.nombre, 20, '\n');
}

int nroAleatorio()
{
    /*Genera numeros aleatorios entre -10 y 10*/
    int x = (-10 + rand() % (10 + 10 + 1)); //cstdlib requerido
    return x;
}

void generarPuntaje(Punto p[], int disparos)
{ // Cargamos el valor absoluto de los numeros generados
    /*Se produce un error si no usamos el valor absoluto. Investigar por que(unsigned int)*/
    for (int i = 0; i < disparos; i++)
    {
        p[i].a = abs(nroAleatorio());
        p[i].b = abs(nroAleatorio());
    }
}

void cargarDisparos(Punto p[], int disparos[], int cantD)
{ /*Cargamos en el vector disparos las coordenadas generadas anteriormente, cuidamos
  no cargar mal*/
    int contadorP = 0;
    for (int i = 0; i < (cantD * 2); i++)
    {
        disparos[i] = p[contadorP].a;
        i++;
        disparos[i] = p[contadorP].b;
        contadorP++;
    }
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
void imprimirTODO(Tirador t, int cantD, Puntaje p)
{   //Imprimimos todo lo que nos pide el enunciado
    cout << "Disparos:" << endl;
    for (int i = 0; i < (cantD * 2); i++)
    {
        cout << t.disparos[i] << ",";
        i++;
        cout << t.disparos[i] << endl;
    }

    cout << "Mejor tiro: ";
    cout << p.denominacion << " ";
    cout << p.puntaje << endl;
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
        R = sqrt(pow(punto[i].a, 2) + pow(punto[i].b, 2));//math.h requerido
        if (R >= 0 and R < 2)
        {
            strcpy(p[i].denominacion, "CENTRO"); //cstring requerido para usar strcpy
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
    srand(time(NULL)); //ctime requerido
    int opc = 0;
    // srand(time(NULL));
    while (opc != 2)
    {
        cout << "--.-- Disparos al Blanco --.--" << endl;
        cout << "1.Leer datos de Tirador" << endl;
        cout << "2.Salir" << endl;
        cin >> opc;
        if (opc == 1)
        {

            Tirador t;
            leerNombreyApellido(t);
            int cantD = 3;
            Punto punt[3];
            generarPuntaje(punt, cantD);
            cargarDisparos(punt, t.disparos, cantD);
            Puntaje puntajes[3];
            calculoDePuntajes(puntajes, punt, cantD);
            int posMejorPuntaje = hallarPosMejor(puntajes);
            imprimirTODO(t, cantD, puntajes[posMejorPuntaje]);
        }
    }

    return 0;
}