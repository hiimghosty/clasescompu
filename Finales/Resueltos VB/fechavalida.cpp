/*6) Hacer un programa donde se ingrese una fecha (dia, mes, anho) y verifique si es una fecha
válida (controlar cantidad de días de los meses, año bisiesto, anho entre 1900 y 2100). Declarar
fecha como una estructura.*/

#include<iostream>
using namespace std;

struct Fecha
{
	int dia;
	int mes;
	int anho;
};

Fecha cargarfecha()
{
	Fecha fechas;
	cout<<"Ingrese el dia:"<<endl;
	cin>>fechas.dia;
	cout<<"Ingrese el mes: "<<endl;
	cin>>fechas.mes;
	cout<<"Ingrese el anho: "<<endl;
	cin>>fechas.anho;
	
	return fechas;
}

bool esBisiesto(int anho)
{
	if(anho%400==0 || (anho%4==0 && anho%100!=0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int cantdias(int mes, int anho)
{
	if(mes==2)
	{
		if(esBisiesto(anho))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	{
		return 31;
	}
	else
	{
		return 30;
	}
}
void mostrar(Fecha fecha)
{
	if(fecha.dia<10)
	{
		cout<<"0";
	}
	cout<<fecha.dia<<"/";
	if(fecha.mes<10)
	{
		cout<<"0";
	}
	cout<<fecha.mes<<"/"<<fecha.anho;
}

void indicarfechavalida(Fecha fecha)
{
	int diaMax;
	diaMax=cantdias(fecha.mes,fecha.anho);
	bool esfechavalida= fecha.dia<=diaMax && fecha.mes<=12 && (fecha.anho>=1900 && fecha.anho<=2100);
	cout<<endl;
	mostrar(fecha);
	cout<<endl;
	if(!(esfechavalida))
	{
		cout<<"La fecha ingresada NO es valida";
	}
	else
	{
		cout<<"La fecha ingresada es valida!!:)";
	}
	
}




int main()
{
	Fecha fecha;
	fecha=cargarfecha();
	indicarfechavalida(fecha);
}

