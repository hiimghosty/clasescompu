#include<iostream>
using namespace std;
int main(){
	/*
	Escribir un programa que lea tres números enteros, y muestre en pantalla el valor central. 
	Por ejemplo, si los números ingresados son 4, 1 y 3 (en cualquier orden), debe mostrarse en pantalla el 3.

Obs: se puede suponer que siempre se cargarán números enteros 
	*/
	int a,b,c,central;
	cout<<"Introducir 3 numeros"<<endl;
	cin>>a>>b>>c;
	if( (b<c and b>a) or (b<a and b>c) ) central=b;
	else if( (a<b and a>c) or (a<c and a>b)  ) central=a;
	else if( (c<b and c>a) or (c<a and c>b)  ) central=c;
	cout<<"El elemento central es: "<<central;
	return 0;
}
