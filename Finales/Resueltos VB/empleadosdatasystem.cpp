/*5) La información de todos los empleados de la empresa DATASYSTEM está almacenada en una
variable de tipo estructura llamada "empleado". La información con la que cuenta de cada
empleado es: nombre, sexo y sueldo. Realizar un programa en C/C++ que lea los datos de los N
trabajadores de la empresa y que imprima los datos del empleado con mayor y menor salario,
luego ORDENAR la información de los empleados por método de Burbuja de acuerdo a su salario
de forma ascendente.*/

#include<iostream>
using namespace std;

struct empleado
{
	char nombre[20];
	char sexo;
	unsigned int sueldo;
};

int validar()
{
	float n;
	do
	{
		cout<<"Ingrese la cantidad de de empleados: ";
		cin>>n;
	} while(n<=0 || n!=int(n));
	
	return n;
}

empleado cargar()
{
	empleado emple;
	cout<<"Ingrese el nombre del empleado: ";
	cin>>emple.nombre;
	cout<<"Ingrese el sexo del empleado: ";
	cin>>emple.sexo;
	cout<<"Ingrese el sueldo del empleado: ";
	cin>>emple.sueldo;
	
	return emple;
}

void imprimirempleados(empleado persona)
{
	cout<<persona.nombre<<endl;
	cout<<persona.sexo<<endl;
	cout<<persona.sueldo<<endl;
}

void mayorsueldo(empleado emple[], int N)
{
	
	empleado aux=emple[0];
	for(int i=0; i<N; i++)
	{
		if(aux.sueldo<emple[i].sueldo)
		{
			aux=emple[i];
		}
		
	}
	
	imprimirempleados(aux);
}

void menorsueldo(empleado emple[], int N)
{
	
	empleado aux=emple[0];
	for(int i=0; i<N; i++)
	{
		if(aux.sueldo>emple[i].sueldo)
		{
			aux=emple[i];
		}
			
		
	}
	
	imprimirempleados(aux);
}

void ordenar(empleado emple[], int N)
{
	struct empleado aux;
	int pos=0;
	for(int i=0; i<N; i++)
	{	
		pos=i;
		
		for(int j=i+1; j<N; j++)
		{
			if(emple[pos].sueldo>emple[j].sueldo)
			{
				pos=j;
			}
		}
		
		aux=emple[i];
		emple[i]=emple[pos];
		emple[pos]=aux;
	}
	
	for(int i=0; i<N; i++)
	{
		imprimirempleados(emple[i]);
		cout<<endl;
	}
}
int main()
{
	int N;
	N=validar();
	empleado empleados[N];
	for(int i=0; i<N; i++)
	{
		empleados[i]=cargar();
	}
	
	cout<<"La persona con mayor sueldo es: ";
	mayorsueldo(empleados,N);
	cout<<endl<<"La persona con menor sueldo es: ";
	menorsueldo(empleados,N);
	cout<<endl<<"Los empleados son:"<<endl;
	ordenar(empleados,N);
	
	
}
