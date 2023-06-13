/*
A. Crear una estructura en C++ que lea y registre los datos de n empleados
(n mayor o igual a 2, leido por teclado y validado). 
 Los datos requeridos son: nombre (char [20]), edad (unsigned short), 
 sexo ('f' o 'm') y sueldo (unsigned int). 
B. Luego imprima los datos de todas las mujeres, la que mas gana (y el monto) y 
   la mas joven (y su edad).  
C. Analogamente con los hombres.
*/
#include<iostream>
using namespace std;
//Cree aqui la estructura empleado con los campos indicados
struct empleado
{
    char nombre[20];
    unsigned short edad;
    char sexo;
    unsigned int sueldo;
};

int leerN(int a) {
	float N;
	do {
		cout << "Ingrese un numero entero mayor o = a " << a << ": ";
		cin >> N;
	} while ( N != int(N) or (N < 2 ) );
	return (int)N;
}

void imprimirEmpleado(empleado e) {
	cout << endl;
	//imprima aquí los datos del empleado, a continuación de cada texto
	cout << "Nombre: ";
	cout<<e.nombre;
	cout << "\nEdad: " ;
	cout<<e.edad;
	cout << "\nSexo: " ;
	cout<<e.sexo;
	cout << "\nSueldo: ";
	cout<<e.sueldo;
	cout << endl;
}

void procesarMujeres(empleado emp[], int n){
	cout << "-----Mujeres-----";
	//agregue aqui el proceso solicitado

	for(int i=0; i<n; i++)
	{
	    if(emp[i].sexo=='f')
	    {
	      imprimirEmpleado(emp[i]);
	    }
	}
	cout << "\nMujer que mas gana"; 
	//llame a la funcion imprimirEmpleado
	int j=0;
	empleado mujeres[n];
	for(int i=0; i<n; i++)
	{
	    if(emp[i].sexo=='f')
	    {
	        mujeres[j]=emp[i];
	        j++;
	    }
	}
	empleado aux=mujeres[0];
	for(int i=0; i<j; i++)
	{
	   if(aux.sueldo<mujeres[i].sueldo)
	   {
	       aux=mujeres[i];
	   }
	  
	}
	
	     imprimirEmpleado(aux);
	
	cout << "\nMujer mas joven"; 
    //llame a la funcion imprimirEmpleado
    
    empleado aux1=mujeres[0];
	for(int i=0; i<j; i++)
	{
	   if(aux1.edad>mujeres[i].edad)
	   {
	       aux1=mujeres[i];
	   }
	  
	}
	
	    imprimirEmpleado(aux1);
	
}

void procesarVarones(empleado emp[], int n){
	cout << "-----Varones-----";
	//agregue aqui el proceso solicitado
    	for(int i=0; i<n; i++)
	{
	    if(emp[i].sexo=='m')
	    {
	      imprimirEmpleado(emp[i]);
	    }
	}
	cout << "\nHombre que mas gana"; 
	//llame a la funcion imprimirEmpleado
	int j=0;
	empleado hombres[n];
	for(int i=0; i<n; i++)
	{
	    if(emp[i].sexo=='m')
	    {
	        hombres[j]=emp[i];
	        j++;
	    }
	}
	empleado aux=hombres[0];
	for(int i=0; i<j; i++)
	{
	   if(aux.sueldo<hombres[i].sueldo)
	   {
	       aux=hombres[i];
	   }
	  
	}
	
	    imprimirEmpleado(aux);

	
	cout << "\nHombre mas joven";	 
	//llame a la funcion imprimirEmpleado
	
	empleado aux1=hombres[0];
	for(int i=0; i<j; i++)
	{
	   if(aux1.edad>hombres[i].edad)
	   {
	       aux1=hombres[i];
	   }
	  
	}
	
	    imprimirEmpleado(aux1);
	

}

empleado leerEmpleado() {
	
    struct empleado emple;
	cin>>emple.nombre;
	cin>>emple.edad;
	cin>>emple.sexo;
	cin>>emple.sueldo;
	
	return emple;
	
}

int main(){	
	int n=leerN(2);
	struct empleado empleados[n];
	cout << "Ingrese los datos del Empleado nombre, edad, sexo (f o m) y sueldo" << endl;
	for(int i=0; i<n; i++){
		empleados[i] = leerEmpleado();
	} 
	cout << endl;
	procesarMujeres(empleados, n);
	cout << endl;
	procesarVarones(empleados, n);
}
