#include<iostream>
using namespace std;
//Pedir al usuario que introduzca un numero N, validar si es entero y positivo, y decir si es primo

int validar(float n){
	do{
		cout << "Introducir un numero entero y positivo"<<endl;
		cin >> n;
	} while(n!=int(n) or n<0);
	
	return n;
}


int cant_divisores(int n){
	int divisores=0;
	for(int i=1; i<(n-1); i++) {
		if(n%i==0) divisores++;
	}
	
	return divisores;
}

int main(){
	float n;
	n=validar(n);
	if(cant_divisores(n)==1) cout << "Es primo";
	else cout <<"No es primo";
	
	return 0;
}
