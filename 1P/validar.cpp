#include <iostream>
using namespace std;
int main(){
    //Pedir al usuario que introduzca un numero entero, hasta que el numero sea entero
    float n;
    do{
        cout << "Introducir un numero entero";
        cin >> n;
    } while(n!=int(n));
    
    return 0;
}