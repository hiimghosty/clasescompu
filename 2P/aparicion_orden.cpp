#include<iostream>
using namespace std;

/*Función que devuelve la cantidad de apariciones del número x en el vector A de N elementos*/
int nroApariciones(int x, int A[], int N){
    //IMPLEMENTAR
}

/*Función que devuelve el elemento que menos veces aparece en el vector A de N elementos
(si hay más de uno, devuelve el que aparece primero en el vector -de izq a der-)*/
int elementoQueMenosAparece(int A[], int N){
    //IMPLEMENTAR
}

/*Función que devuelve true si los elementos del vector A de N elementos están en orden no-descendente
(de izq a der); y false en caso contrario*/
bool estaOrdenadoNoDesc(int A[], int N){
    //IMPLEMENTAR
}

/*NO MODIFICAR EL MAIN!!!!!!!!!*/
int main(){
    int opcion,N,i,x;
    cin>>opcion;
    cin>>N;
    int A[N];
    if(opcion==1) cin>>x;
    for(i=0;i<N;i++) cin>>A[i];
    if(opcion==1) cout<<nroApariciones(x,A,N)<<endl;
    if(opcion==2) cout<<elementoQueMenosAparece(A,N)<<endl;
    if(opcion==3) cout<<estaOrdenadoNoDesc(A,N)<<endl;
    return 0;
