#include<iostream>
#include<ctime>
#include<cstdlib>
#include <math.h>
using namespace std;
//rand genera numeros entre 0 y un numero muy grande que se llama RANDMAX, al dividor por el mismo, aseguramos tener un numero 
//decimal entre 0 y 1
float coordenadaAleatoria(){
	float rand_num = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
	return rand_num;
}
//Para la funcion y=sqrt(x), recibe X y devuelve Y;
float ordenadaRaiz(float x){
	float ordenada=0;
	ordenada=sqrt(x);
	//cout<<"ordenadaraiz"<<ordenada;
	return ordenada;
}
//Para la funcion y=x*x, recibe X y devuelve la Y;
float ordenadaPotencia(float x){
	float ordenada=0;
	ordenada=pow(x,2);
	//cout<<"ordenadapotencia"<<ordenada;
	return ordenada;
}
int main(){
	srand(time(NULL));
	float x,y,areaDelCuadrado=pow(1,2),areaDeCurvas,puntosGenerados=0,puntosEnElArea; 
	int n;
	cout<<"Introducir N"<<endl;
	cin>>n;
	while(puntosGenerados<n){
		x=coordenadaAleatoria(); 
		y=coordenadaAleatoria(); 
		if((y<=ordenadaRaiz(x))and y>=ordenadaPotencia(x)){//Esto nos sirve para ver si nuestro punto esta entre las curvas
			puntosEnElArea++; //Si es que esta, sumamos 1 a este contador
		}
		puntosGenerados++;//Este o no, sumamos 1 a este contador
	}

	areaDeCurvas=((areaDelCuadrado)*puntosEnElArea)/puntosGenerados;//Calculamos el area usando la proporcion que nos dice
	cout<<"El area es: "<<areaDeCurvas;//El area entre las curvas realmente es 0,3333, este codigo nos retorna alrededor de 0,34, esta precision podria ser mejorada si usamos float
	return 0;
}
