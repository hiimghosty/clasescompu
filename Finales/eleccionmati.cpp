#include <iostream>
#include <cstdlib>
using namespace std;
/* Utilice el siguiente codigo del main pero no lo modifique */

struct Mesa
{
    int candidato[5];
    int totalVotos;
};

int validarNumeroMesas()
{
    // Entero positivo mayor o igual que 10
    float x;
    do
    {
        cout << "Ingrese el numero de mesas: ";
        cin >> x;
    } while (int(x) != x or x < 10);

    return x;
}

int votoAleatorio()
{
    // 280 a 320
    return (280 + rand() % (320 - 280 + 1));
}

int nroAleatorio()
{
    //-10 a 10
    return (-10 + rand() % (10 + 10 + 1));
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

void generarEleccion(Mesa mesa[], int numMesas, float porcentajes[])
{
    for (int i = 0; i < numMesas; i++)
    {
        mesa[i].totalVotos = votoAleatorio();
        for (int j = 0; j < 5; j++)
        {
            mesa[i].candidato[j] = mesa[i].totalVotos * porcentajes[j] + nroAleatorio();
        }
    }
}

void imprimirVotos(Mesa mesa[], int NumMesas)
{
    for (int i = 0; i < NumMesas; i++)
    {
        cout << "Mesa " << i + 1 << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Candidato " << j + 1 << ": ";
            cout << mesa[i].candidato[j] << " ";
        }
        cout << endl;
    }
}

void calcularResultados(Mesa mesa[], int numMesas)
{
    int totalPorCandidato[5] = {0};

    for (int i = 0; i < numMesas; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalPorCandidato[j] += mesa[i].candidato[j];
        }
    }

    cout << "Resultados de la eleccion: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Candidato " << i+1 <<": " <<totalPorCandidato[i]<<endl;

    }
    
    cout << "Total de votos: " << sumaElementos(totalPorCandidato,5);
}

int main()
{
    int imprimir;
    int numMesas = validarNumeroMesas(); // 10P
    cout << "Ingrese 1 para imprimir votos y 0 para imprimir solo el resultado:" << endl;
    cin >> imprimir;
    Mesa mesas[numMesas]; // 5P
    float porcentajes[] = {0.4271, 0.2748, 0.2291, 0.0445, 0.0345};
    // Generar los resultados de la elección
    generarEleccion(mesas, numMesas, porcentajes); // 40P
    if (imprimir)
        imprimirVotos(mesas, numMesas); // 20P
    // Calcular y mostrar los resultados finales de la elección
    calcularResultados(mesas, numMesas); // 25P
    return 0;
}
