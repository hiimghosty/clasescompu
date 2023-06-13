/*1) Implemente una función con un valor booleano que indique con “true” si la cadena recibida
representa un número hexadecimal, y “false” en caso contrario.

S={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}

*/

#include<iostream>
using namespace std;

bool eshexadecimal(char cad[],int n)
{
	int i=0;
	while(cad[i]!='\0')
	{
		if( not((cad[i]>='0' && cad[i]<='9') || (cad[i]>='A' && cad[i]<='F')))
		{
			return false;
		}
		
		i++;
	}
	
	return true;
}
int main()
{
	int n;
	cout<<"Ingrese un número entero y positivo: ";
	cin>>n;
	char cad[n];
	cin>>cad;
	if(eshexadecimal(cad,n))
	{
		cout<<"la cadena es hexadecimal";
	}
	else
	{
		cout<<"la cadena NO es hexadecimal";
	}
	cout<<endl;
	return 0;
}
