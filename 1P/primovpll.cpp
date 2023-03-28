#include<iostream>
#include<math.h>
using namespace std;
//Escriba una función para generar una serie de números primos comprendidos entres 2 y N
bool esPrimo(int n){
   // escriba su codigo
   for(int i=2; i<n; i++){
   	if(n%i==0) return false;	
   }
	return true;
}
void imprimir_primos(int n){
// escriba su codigo
	for(int j=2; j<=n; j++){
		if(esPrimo(j)==true) cout << j <<endl;
	}
}

main(){
	int n;
	cin>>n;
	imprimir_primos(n);
}
