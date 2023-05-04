#include <iostream>
#include <cstdlib>
using namespace std;
// FALTA CORREGIR
void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << " ";
    }
}
void generarV(int V[], int n)
{
    // cout << "introduzca las componentes del vector:"
    // Puse que sea aleatorio porque era garra nomas
    for (int i = 0; i < n; i++)
    {
        V[i] = 0 + rand() % (100 - 0 + 1);
    }
}

void cantAparicion(int V[], int n)
{
    int cont = 0;
    int x = 0;
    cout << "Introduzca un numero:";
    cin >> x;
    for (int j = 0; j < n; j++)
    {
        if (x == V[j])
            cont++;
    }
    if (cont != 0)
        cout << "El numero " << x << " aparecio " << cont << " veces" << endl;
    else
    {
        cout << "El numero" << x << "no es componente del vector" << endl;
    }
}

int MenosAparicion(int V[], int n)
{
    int elQueMenosAparece = V[0], aparicionesMenosAparece = 1, aparicionesAux = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (V[i] == V[j])
                aparicionesAux++;
            else
                continue;
        }
        if (aparicionesAux < aparicionesMenosAparece)
        {
            aparicionesMenosAparece = aparicionesAux;
            elQueMenosAparece = V[i];
        }

        aparicionesAux = 0;
    }

    return elQueMenosAparece;
}

bool estaOrdenado(int V[], int n)
{
    bool ascendente = true;
    int max = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (V[n - i] < V[max - j])
            {
                ascendente = false;
                break;
            }
        }
        max--;
    }
    return ascendente;
}

int main()
{
    int n;
    cout << "Introduzca el numero de componentes del vector:";
    cin >> n;
    int V[n];
    generarV(V, n);
    impresionDeVector(V, n);
    cantAparicion(V, n);
    cout << endl;
    cout << "El elemento que menos aparece es" << MenosAparicion(V, n);
    if (estaOrdenado(V, n) == true)
        cout << "true";
    else
        cout << "false ";
    return 0;
}
