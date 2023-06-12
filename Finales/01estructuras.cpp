#include <iostream>
using namespace std;

struct
{
    int cedula;
    char nombre[20];
    int semestre;

} alumno1; // Nombre de la estructura

int main()
{
    cout << "Introducir cedula";
    cin >> alumno1.cedula;
    cout << "Introducir nombre";
    cin >> alumno1.nombre;
    cout << "Semestre:";
    cin >> alumno1.semestre;

    cout << alumno1.cedula << endl;
    cout << alumno1.nombre << endl;
    cout << alumno1.semestre << endl;

        return 0;
}