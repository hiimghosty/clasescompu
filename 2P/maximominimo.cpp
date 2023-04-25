#include <iostream>
using namespace std;

int cargaDeVector(){
    int x;
    cin>>x;
    return x;
}



void mayorElemento(int numeros[], int n){
    int mayor=numeros[0];

    for (int i=0; i<n; i++){
        if (numeros[i] > mayor) mayor=numeros[i];
        else continue;
        
    }
    cout << "El mayor elemento es: "<<mayor;
}

void menorElemento(int numeros[], int n){
    int menor=numeros[0];

    for (int i=0; i<n; i++){
        if (numeros[i] < menor) menor=numeros[i];
        else continue;
        
    }
    cout << "El menor elemento es: "<<menor;
}

int main(){
    //Pedir al usuario que ingrese un vector con N elementos, e imprimir el mayor elemento
    //y el menor
    int n;
    
    cout << "Introducir un tamanho entero de n"<<endl;
    cin >> n;

    int numeros[n];


    for (int i=0; i<n; i++){
        cout<<"Introducir el elemento numero : "<<i+1<<endl;
        numeros[i]=cargaDeVector();
    }
    
    mayorElemento(numeros,n);
    menorElemento(numeros,n);
    return 0;
}