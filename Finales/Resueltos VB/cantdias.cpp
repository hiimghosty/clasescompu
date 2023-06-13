/*4) Escribir un programa para calcular el número de días que hay entre dos fechas: declarar fecha
como una estructura.*/

#include<iostream>
using namespace std;
struct fecha
{
	int dia;
	int mes;
	int anho;
};

fecha ingresarfechas()
{
	fecha f;
	cout<<"dia: ";
	cin>>f.dia;
	cout<<"mes: ";
	cin>>f.mes;
	cout<<"anho: ";
	cin>>f.anho;
	
	return f;
}

void cantdias(fecha fechas[1])
{
	int suma3, suma2, suma1;

		if(fechas[0].anho<fechas[1].anho)
		{
			suma3=fechas[1].anho-fechas[0].anho;
		}
		else
		{
			suma3=fechas[0].anho-fechas[1].anho;
		}
		
		if(fechas[0].mes<fechas[1].mes)
		{
			suma2=fechas[1].mes-fechas[0].mes;
		}
		else
		{
			suma2=fechas[0].mes-fechas[1].mes;
		}
		
		if(fechas[0].dia<fechas[1].dia)
		{
			suma1=fechas[1].dia-fechas[0].dia;
		}
		
		if(suma2==1 || suma3==1)
		{
			suma2=0;
			suma3=0;
		}
		else
		{
			suma1=fechas[0].dia-fechas[1].dia;
		}

	cout<<"Hay "<<suma1<<" dias, "<<suma2<<" meses y "<<suma3<<" anhos";
}

int main()
{
	struct fecha fechas[2];
	for(int i=0; i<2; i++)
	{
		fechas[i]=ingresarfechas();
	}
	
	cantdias(fechas);
}
