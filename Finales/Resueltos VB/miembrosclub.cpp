/*3) Sean Nombre, sexo, anho tres variables que contienen el nombre, sexo y años de pertenencia
de cada uno de los miembros de un club. Masculino o Femenino se denota mediante ‘M’ y ‘F’,
respectivamente.
Diseñar un programa mediante arreglo de estructura, se ingrese los datos de N miembros del club,
imprima todos los miembros del club con todos sus datos, además busque la persona que tiene
mayor antigüedad e indicar si es masculino o femenino.*/

#include<iostream>
using namespace std;

struct miembros
{
	char nombre[20];
	char sexo;
	unsigned int anho;
	
};

miembros ingresar_datos()
{
	struct miembros datos;
	cout<<"nombre: ";
	cin>>datos.nombre;
	cout<<"sexo: ";
	cin>>datos.sexo;
	cout<<"anho de permanencia: ";
	cin>>datos.anho;
	
	return datos;
}
void imprimirmiembro(miembros persona)
{
	cout<<"nombre: ";
	cout<<persona.nombre<<endl;
	cout<<"sexo: ";
	cout<<persona.sexo<<endl;
	cout<<"anho de permanencia: ";
	cout<<persona.anho<<endl;
	
}

void mayorantiguedad(miembros persona[], int n)
{
	miembros aux=persona[0];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(aux.anho<persona[j+1].anho)
			{
				aux=persona[j+1];
			}
		}
	}
	
	imprimirmiembro(aux);
}

int main()
{
	int N;
	cout<<"Ingrese un nro entero y positivo: ";
	cin>>N;
	struct miembros persona[N];
	for(int i=0; i<N; i++)
	{
		persona[i]=ingresar_datos();
	}
	
	for(int i=0; i<N; i++)
	{
		imprimirmiembro(persona[i]);
	}
	
	cout<<endl<<"La persona con mas antiguedad es: "<<endl;
	mayorantiguedad(persona,N);
	
}
