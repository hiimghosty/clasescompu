#include<iostream>
#include<math.h>
using namespace std;
//Escriba una función para generar una serie de números primos comprendidos entres 2 y N
bool esPrimo(int n){
   // escriba su codigo
   bool primo=true;
   int cont=0;
   for(int i=2; i<n; i++){
   	if(n%i==0) cont++;
   	if(cont>=1) primo=false;
   }
	return primo;
}

void imprimir_primos(int n){
// escriba su codigo
	for(int i=2; i<=n; i++){
		if(esPrimo(i)) cout << i << " ";
	}
	 
}

main(){
	int n;
	cin>>n;
	imprimir_primos(n);
}
