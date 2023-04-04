#include<iostream>
using namespace std;
int main(){
	//Un programa que le pida al usuario que ingrese un numero, que representa un dia de la semana, e imprimir ese dia
	int dia;
	cin>>dia;
	switch(dia){
		case 1:
			cout<<"Lunes";
			break;
		case 2:
			cout<<"Martes";
			break;
		case 3:
			cout<<"Miercoles";
			break;
	}
	return 0;
}
