/*2) Implemente una función que reciba una cadena y la convierta a mayúsculas. Implementar también
una función que convierta una cadena a minúsculas*/

#include<iostream>
using namespace std;

void convertir_minusculas(char cad2[],int n)
{
	int i=0;
	while(cad2[i]!='\0')
	{
		if(cad2[i]>='A' && cad2[i]<='Z')
		{
			cad2[i]=cad2[i]+' ';
		
		}
		
		i++;
	}
}

void convertir_mayusculas(char cad1[],int n)
{
	int i=0;
	while(cad1[i]!='\0')
	{
		if(cad1[i]>='a' && cad1[i]<='z')
		{
			cad1[i]=cad1[i]-' ';
		
		}
		
		i++;
	}
}

int main()
{
	int n;
	cout<<"Ingrese un numero entero y positivo: ";
	cin>>n;
	char cad1[n], cad2[n];
	
	cout<<"Ingrese una palabra: ";
	cin>>cad1;
	convertir_mayusculas(cad1,n);
	
	cout<<"Ingrese una palabra en mayusculas: ";
	cin>>cad2;
	convertir_minusculas(cad2,n);
	
	cout<<cad1<<endl;
	cout<<cad2;

	

	
	
}
