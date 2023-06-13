/*7) Se desea cargar, por teclado, el código, nombre y apellido de 5 alumnos y generar
aleatoriamente sus puntajes (entre 1 y 30) de 3 asignaturas (Calculo, Geometria, Fisica) en un
array de struct. Imprimir el código, nombre y apellido, asignaturas con puntaje y el promedio del
alumno. Imprimir además el promedio de cada asignatura.
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

struct Alumno
{
	unsigned short codigo;
	char nombre[20];
	char apellido[20];
	int puntajes[3];
};

Alumno cargar()
{
	Alumno alumnos;
	cout<<"Ingrese el codigo del Alumno: ";
	cin>>alumnos.codigo;
	cout<<"Ingrese el nombre del Alumno: ";
	cin>>alumnos.nombre;
	cout<<"Ingrese el apellido del Alumno: ";
	cin>>alumnos.apellido;
	alumnos.puntajes[3];
	for(int i=0; i<3; i++)
	{
		alumnos.puntajes[i]=1+rand()%31;
	}
	
	return alumnos;
}

int promedio(Alumno alumno)
{
	int prom;
	for(int i=0; i<3; i++)
	{
		prom=prom+alumno.puntajes[i];
	}
	
	prom=prom/3;
	
	return prom;
}

void imprimir(Alumno alumno)
{
	cout<<alumno.codigo<<"  ";
	cout<<alumno.nombre<<"  ";
	cout<<alumno.apellido<<"  ";
	
	for(int i=0; i<3; i++)
	{
		if(i==0)
		{
			cout<<"Calculo: ";
		}
		if(i==1)
		{
			cout<<"Geometria: ";
		}
		if(i==2)
		{
			cout<<"Fisica: ";
		}
		cout<<alumno.puntajes[i]<<"  ";
	}
	
	cout<<"  "<<"Promedio: "<<promedio(alumno);

}

int main()
{
	Alumno alumno[5];
	
	for(int i=0; i<5; i++)
	{
		alumno[i]=cargar();
	}
	
	for(int i=0; i<5; i++)
	{
		imprimir(alumno[i]);
		cout<<endl;
	}
}
