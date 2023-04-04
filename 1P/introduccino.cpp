#include<iostream>
using namespace std;
int main(){
	cout<<"Bienvenido/a a la calculadora de suma"<<endl;
	cout<<"Introducir dos numeros"<<endl;
	/*
	Tipos de datos
	int ENTERO [repasar tamanho]
	float CON COMA [si es entero, va a poner .o]
	char LETRAS 
	*/
	//ACA a NO EXISTE
	float a,b,resultado;
	cin>>a;
	cin>>b;
	cout<<"El valor de a es:"<<a<<endl;
	cout<<"El valor de b es:"<<b<<endl;
	//debe iniciar con una letra, y tiene que ser del abecedario ingles puedn usar guion bajo
	//Salto de linea con "\n" o con endl;
	resultado=a+b;
	cout<<"El resultado es: "<<resultado;
	return 0;
}



