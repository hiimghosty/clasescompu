#include<iostream>
using namespace std;
/* Escribir un programa en C++ que debe solicitar al usuario un número entero y 
mayor que 2 (validarlo), y debe imprimir la lista de números primos entre 2 y el 
número ingresado. Los números mostrados en pantalla deben estar separados por un
espacio simple (ver los dos últimos casos de prueba que están abajo).*/

int main(){
    float n;
    do{
        cout << "Introducir un numero entero y mayor que 2: ";
        cin >> n;
    } while(n!=int(n) or n<=2);
    int divisores=0;
    for(int i=2; i<=n; i++){//Para recorrer TODOS los numeros
        //queremos ver si i es primo
        for(int j=1; j<i; j++ ){//Para recorrer los posibles divisores de i
                if(i%j==0) divisores++;
        }
        if(divisores==1) cout << i <<" ,";
        divisores=0;

    }
    return 0;
}