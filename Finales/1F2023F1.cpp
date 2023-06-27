#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Naipe
{
    int numero;
    char palo[10];
};

void cargarMazo(Naipe mazo[])
{
    int cantidadDeCartas = 50;
    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            mazo[n].numero = j;
            if (i == 0)
            {
                strcpy(mazo[n].palo, "COPA");
            }

            if (i == 1)
            {
                strcpy(mazo[n].palo, "ORO");
            }

            if (i == 2)
            {
                strcpy(mazo[n].palo, "BASTO");
            }

            if (i == 3)
            {
                strcpy(mazo[n].palo, "ESPADA");
            }
            n++;
        }
    }
    // La n termina en la posicion del comodin, entonces
    // A partir de ahi puedo agregar los dos comodines
    mazo[n].numero = 1;
    strcpy(mazo[n].palo, "COMODIN");
    n++;
    mazo[n].numero = 2;
    strcpy(mazo[n].palo, "COMODIN");
}

void imprimir(Naipe mazo[])
{
    int cantidadDeCartas = 50;
    for (int i = 0; i < cantidadDeCartas; i++)
    {
        cout << mazo[i].numero << " ";
        cout << mazo[i].palo << " ";
        if ((i + 1) % 12 == 0)
            cout << endl;
    }
    cout << endl;
};

void mezclar(Naipe mazo[])
{
    int cantidadDeCartas = 50;

    for (int i = 0; i < cantidadDeCartas; i++)
    {
        int j = (0 + rand() % (49 + 1));
        int auxNum = mazo[i].numero;
        char auxPalo[10];
        strcpy(auxPalo, mazo[i].palo);
        mazo[i].numero = mazo[j].numero;
        strcpy(mazo[i].palo, mazo[j].palo);
        mazo[j].numero = auxNum;
        strcpy(mazo[j].palo, auxPalo);
    }
};

void repartir(Naipe mazo[], Naipe *jugadores, int cantJugadores, int N)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < N; j++)
        {
            jugadores[j + N * i].numero = mazo[j + N * i].numero;
            strcpy(jugadores[j + N * i].palo, mazo[j + N * i].palo);
        }
    }
};

void imprimirmano(Naipe *jugadores, int cantJugadores, int N)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Cartas del jugador" << i + 1 << endl;
        for (int j = 0; j < N; j++)
        {
            cout << jugadores[j + N * i].numero << " ";
            cout << jugadores[j + N * i].palo << " ";
        }
        cout << endl;
    }
};

int main()
{
    srand(time(NULL));
    Naipe mazo[50];
    cargarMazo(mazo);
    cout << "Imprimiendo cartas cargadas: " << endl;
    imprimir(mazo);
    cout << endl
         << "El mazo mezclado es: " << endl;
    mezclar(mazo);
    imprimir(mazo);
    cout << "Cuantas cartas quiere repartir?" << endl;
    int N;
    cin >> N;
    cout << "Repartiendo " << N << "cartas " << endl
         << endl;
    Naipe jugadores[4][N];
    repartir(mazo, &jugadores[0][0], 4, N);
    imprimirmano(&jugadores[0][0], 4, N);
    return 0;
}