#include<iostream>
using namespace std;
//Hacer un codigo en c++ que pida al usuario ingresar un numero x en el main mediante
//punteros modifica la x

void modificarX(int *pt){
    *pt = 4000;
}

int main()
{
    cout << "Introducir un numero";
    int x;
    cin >> x;
    int *pt = &x;
    modificarX(pt);
    cout << "El nuevo valor de x es: " <<x;
    

return 0;
}