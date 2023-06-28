#include <iostream>
#include <cstdlib>
using namespace std;

struct Mesa
{
    int candidato[5];
    int totalVotos;
};

int validarNumeroMesas()
{
    float x;
    do
    {
        cout << "Ingrese el numero de mesas" << endl;
        cin >> x;
    } while (x != int(x) or x < 0 or x < 10);
    return x;
}

int votosAleatorios()
{
    return 280 + rand() % (320 - 280 + 1);
}

int nroAleatorio()
{
    return -10 + rand() % (21);
}

void generarEleccion(Mesa mesa[], int numMesas, float porcentajes[])
{
    for (int i = 0; i < numMesas; i++)
    {
        mesa[i].totalVotos = votosAleatorios();
        for (int j = 0; j < 5; j++)
        {
            mesa[i].candidato[j] = mesa[i].totalVotos * porcentajes[j] + nroAleatorio();
        }
    }
}

void imprimirVotos(Mesa mesa[], int numMesas)
{
    for (int i = 0; i < numMesas; i++)
    {
        cout << "Mesa " << i << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Candidato: " << j << " ";
            cout << mesa[i].candidato[j] << " ";
        }
        cout << endl;
    }
}

int sumaElementos(int A[], int tam)
{
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += A[i];
    }
    return suma;
}

void calcularResultados(Mesa mesa[], int numMesas)
{
    int totalPorCandidato[5] = {0}; // Inicializo todos los elementos del vector a 0
    for (int i = 0; i < numMesas; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalPorCandidato[j] += mesa[i].candidato[j];
        }
    }

    cout << "Resultados de la eleccion" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << "Candidato " << j << " :" << totalPorCandidato[j] << endl;
    }

    cout << "Total de votos " << sumaElementos(totalPorCandidato, 5);
}

int main()
{
    int numMesas = validarNumeroMesas();

    cout << "Ingrese 1 para imprimir votos y 0 para imprimir solo el resultado: " << endl;
    int imprimir;
    cin >> imprimir;

    Mesa mesas[numMesas];
    float porcentajes[] = {0.4271, 0.2748, 0.2291, 0.0445, 0.0345};

    // Generar los resultados de la elección
    generarEleccion(mesas, numMesas, porcentajes);
    if (imprimir)
        imprimirVotos(mesas, numMesas);
    // Calcular y mostrar los resultados finales de la elección
    calcularResultados(mesas, numMesas);

    return 0;
}