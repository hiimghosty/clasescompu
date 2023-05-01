#include<iostream>
//arrays - arreglo
using namespace std;

int main(){
    int alumnos[9]; //calificaciones de alumnos
    cout << "Cargar calficaciones de alumnos: " <<endl;

    for (int i=0; i<9; i++){
        cout << "Insertar nota del alumno nro "<<i<<":"<<endl;
        cin>>alumnos[i];
    }

    for (int i=0; i<9; i++){
        cout<<alumnos[i]<<" ";
    }
    

    return 0;
}