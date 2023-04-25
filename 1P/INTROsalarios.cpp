#include<iostream>
using namespace std;
int main(){
	/* Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. 
	Se desea calcular el jornal diario de acuerdo con los siguientes puntos:

La tarifa de las horas diurnas es de 10.000 Gs
La tarifa de las horas nocturnas es de 20.000 Gs
Si es un domingo, el jornal aumenta en un 25%. el 125%jornal
Para un trabajador considerado, se ingresan como entradas el día de la semana en la que trabajó 
(del 1 al 7, donde 7 es domingo), la cantidad de horas trabajadas en el turno diurno, y la cantidad de horas 
trabajadas en el turno nocturno. Se debe mostrar en pantalla el jornal que le corresponde.*/

	cout<<"Introducir el numero de dia de la semana que trabajo"<<endl;
	int diaDeSemana,horasDiurnas,horasNocturnas;
	float jornal;
	cin>>diaDeSemana;

	cout<<"Introducir horas diurnas: ";
	cin>>horasDiurnas;
	
	cout<<"Introducir horas nocturnas: ";
	cin>>horasNocturnas;
	
	jornal=horasDiurnas*10000+horasNocturnas*20000;

	
	if(diaDeSemana==7){
		jornal=jornal*1.25;	
	}
	cout<<"El jornal que te corresponde es de: "<<jornal<<" Gs."<<endl;
	switch(diaDeSemana){
			case 1:
				cout<<"El dia trabajo es lunes";
				break;
		
	}
	return 0;
}	
