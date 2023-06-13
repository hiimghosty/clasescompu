/*la informacion de todos los datos de una empresa esta almacenada en una variable de tipo estrucutura
llamada Empleado.La informacion que se cuenta de cada empleado es sexo,nombre y sueldo.Leer los datos
de los N trabajadores de la empresa e imprima los datos del que tiene mayor y menor sueldo.
tambien ordenar el vector estructura de acuerdo a su salario*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct Empleado
{
    char nombre[20];
    int sueldo;
    char sexo; // considerando solo M o F
};

void cargarDatos(Empleado m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "introduzca su nombre:";
        fflush(stdin);
        cin.getline(m[i].nombre, 20);
        cout << "introduzca su sueldo:";
        cin >> m[i].sueldo;
        cout << "introduzca su sexo:";
        cin >> m[i].sexo;
    }
}
    void ordenando(Empleado emple[], int n)
    {
        Empleado aux;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (emple[j].sueldo > emple[j + 1].sueldo)
                {
                    aux = emple[j];
                    emple[j] = emple[j + 1];
                    emple[j] = aux;
                }
            }
        }
    }

    void imprimiendo(Empleado emple[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << endl
                 << emple[i].nombre;
            cout << endl
                 << emple[i].sueldo;
            cout << endl
                 << emple[i].sexo;
        }
    }

    int main()
    {
        int n, i, pmay, pmen, mayors, menors;
        cout << "introduzca cantidad de empleados:";
        cin >> n;
        Empleado emple[n];
        cargarDatos(emple, n);
        pmay = 0;
        pmen = 0;
        mayors = emple[0].sueldo;
        menors = emple[0].sueldo;
        for (i = 1; i < n; i++)
        {
            if (emple[i].sueldo > mayors)
            {
                mayors = emple[i].sueldo;
                pmay = i;
            }
            if (emple[i].sueldo < menors)
            {
                menors = emple[i].sueldo;
                pmen = i;
            }
        }
        cout << "el mayor sueldo es:" << mayors << " que tiene: " << emple[pmay].nombre;
        cout << endl
             << "el menor sueldo es: " << menors << " que tiene: " << emple[pmen].nombre;

        imprimiendo(emple, n);
        return 0;
    }