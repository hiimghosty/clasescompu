/*2) Un punto en el plano se puede representar mediante una estructura con dos campos. Escribir
un programa que realice las siguientes operaciones en el plano:
 Dados dos puntos, calcular la distancia entre ellos.
 Dados dos puntos determinar la ecuación de la recta que pasa por ellos*/
 
 #include<iostream>
 #include<math.h>
 using namespace std;
  struct puntos
 {
 	float x1;
 	float y1;
 	float x2;
 	float y2;
 	
 };
 
 
 void distancia(struct puntos punto)
 {
	 float d=0;
	d=sqrt((punto.x1-punto.x2)*(punto.x1-punto.x2)+(punto.y1-punto.y2)*(punto.y1-punto.y2));
	
	cout<<"La distancia entre los puntos es: "<<endl<<"d= "<<d;
 }
 
 void recta(struct puntos punto)
 {
 	float V[2];
 	float c;
 	V[0]=punto.x1-punto.x2;
 	V[1]=punto.y1-punto.y2;
 	
 	c=(-1)*(punto.x1*(V[0])+punto.y1*(V[1]));
 	
 	cout<<"La ecuacion parametrica es: "<<endl;
	 cout<<"X= t ( ";
	 for(int i=0; i<2; i++)
	 {
	 	if(i==1)
		 {
		 	cout<<" ; ";
		 }
		 cout<<V[i];
	 	
	 }
	 cout<<" )"<<endl;
	 
	 cout<<"La ecuacion general de la recta es: "<<endl<<V[0];
	 if(V[1]>=0)
	 {
	 	cout<<"x+"<<V[1];
	 }
	 else
	 {
	 	cout<<"x"<<V[1];
	 }
	 if(c>=0)
	 {
	 	cout<<"y+"<<c<<"=0";
	 }
	 else
	 {
	 	cout<<"y"<<c<<"=0";
	 }
	 
 }
 
 int main()
 {
 	struct puntos punto;
 	
	cout<<"Ingrese el primer punto: "<<endl;
 	cout<<"X1: ";
	cin>>punto.x1;
 	cout<<"Y1: ";
	cin>>punto.y1;
	cout<<"Ingrese el segundo punto: "<<endl;
 	cout<<"X2: ";
	cin>>punto.x2;
	cout<<"Y2: ";
 	cin>>punto.y2;
 	
 	distancia(punto);
 	cout<<endl;
 	recta(punto);

 }
