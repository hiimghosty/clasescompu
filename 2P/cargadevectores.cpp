#include<iostream>
using namespace std;

int cargaDeVector(){
    float x;
    do{
        cout << "Introducir un numero entero"<<endl;
        cin>>x;
    }while(int(x)!=x);

    return x;
}

void impresionDeVector(int vector[], int n){
    for(int i=0; i<n; i++){
        cout<<vector[i]<<" ";
    }
}


int main(){
    //Crear un programa que pida al usuario que ingrese numeros enteros y cargarlos
    //En un vector de tamanho n
    int n;
    int notas[n];
    cout << "Definir el tamanho del vector"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        notas[i] = cargaDeVector();

    }
    cout << "El vector impreso es:" <<endl;
    impresionDeVector(notas,n);

    return 0;
}