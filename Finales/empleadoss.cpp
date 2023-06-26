/*la informacion de todos los datos de una empresa esta almacenada en una variable de tipo estrucutura
llamada Empleado.La informacion que se cuenta de cada empleado es sexo,nombre y sueldo.Leer los datos
de los N trabajadores de la empresa e imprima los datos del que tiene mayor y menor sueldo.
tambien ordenar el vector estructura de acuerdo a su salario*/

#include <iostream>
#include <cstdio>
using namespace std;

struct Empleados
{
    char sexo;
    char nombre[20];
    int sueldo;
};

void cargaDeEmpleados(Empleados e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cargando los datos del empleado " << i + 1 << endl;
        cout << "Sexo: ";
        cin >> e[i].sexo;
        cout << "Nombre";
        cin >> e[i].nombre;
        cout << "Sueldo: ";
        cin >> e[i].sueldo;
    }
}

void imprimirEmpleados(Empleados e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Imprimiendo los datos del empleado " << i + 1 << endl;
        cout << "sexo" << e[i].sexo << endl;
        cout << "nombre" << e[i].nombre << endl;
        cout << "sueldo" << e[i].sueldo << endl;
    }
}

void imprimirMayorSueldo(Empleados e[], int n)
{
    int mayor = e[0].sueldo;
    int indice = 0;
    for (int i = 0; i < n; i++)
    {
        if (e[i].sueldo > mayor)
        {
            mayor = e[i].sueldo;
            indice = i;
        }
    }

    cout << "El empleado con mayor sueldo es:" << endl;
    cout << "Sueldo" << e[indice].sueldo << endl;
    cout << "Nombre" << e[indice].nombre << endl;
    cout << "Sexo" << e[indice].sexo << endl;
}

void ordenarBurbuja(Empleados A[], int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {
        for (int j = 0; j < (tam - 1); j++)
        {
            if (A[j].sueldo > A[j + 1].sueldo)
            {
                int aux = A[j].sueldo;
                A[j].sueldo = A[j + 1].sueldo;
                A[j + 1].sueldo = aux;
            }
        }
    }
}

int main()
{
    cout << "Introducir cantidad de empleados" << endl;
    int n;
    cin >> n;
    Empleados e[n];
    cargaDeEmpleados(e, n);
    imprimirEmpleados(e, n);
    imprimirMayorSueldo(e, n);
    ordenarBurbuja(e, n);
    imprimirEmpleados(e, n);
    return 0;
}