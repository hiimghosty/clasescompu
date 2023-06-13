#include<iostream>
using namespace std;
//Cree aqui la estructura persona con los campos edad, grupo,icp
struct persona
{
    unsigned short edad;
    int grupo;
    unsigned int icp;
};

int validar(){
    float n;
    do
    {
        cout<<"ingrese N numero entero y positivo:";
        cin>>n;
        
    } while(n!=int(n) || n<=0);
    
    return n;
}
persona ingrese_persona(){
    
    struct persona per;
	cin>>per.edad;
	cin>>per.grupo;
	cin>>per.icp;
	
	return per;
}
void item_A(persona encuestado[],int n){
	int ep1=0, ep2=0, pt1=0, pt2=0, np1=0, np2=0;//variables de extrema pobreza, pobreza total y no pobres respectivamente
	//Modifique desde aqui
	
	for(int i=0; i<n; i++)
	{
	    if(encuestado[i].grupo==1 && (encuestado[i].icp>=262768 && encuestado[i].icp<=686075))
	    {
	        pt1++;
	    }
	    
	    if(encuestado[i].grupo==1 && encuestado[i].icp<=262768)
	    {
	        ep1++;
	    }
	    
	    if(encuestado[i].grupo==2 && (encuestado[i].icp>=262768 && encuestado[i].icp<=686075))
	    {
	        pt2++;
	    }
	    
	    if(encuestado[i].grupo==2 && encuestado[i].icp<=262768)
	    {
	        ep2++;
	    }
	    
	     if(encuestado[i].grupo==1 && encuestado[i].icp>686075)
	    {
	        np1++;
	    }
	    
	    if(encuestado[i].grupo==2 && encuestado[i].icp>686075)
	    {
	        np2++;
	    }
	}
	
	//Modifique hasta aqui
	cout<<"Grupo 1: hay "<<ep1<<" en extrema pobreza, "<<pt1<<" en pobreza total y "<<np1<<" no pobres"<<endl;
	cout<<"Grupo 2: hay "<<ep2<<" en extrema pobreza, "<<pt2<<" en pobreza total y "<<np2<<" no pobres"<<endl;
}
void item_B(persona encuestado[],int n){
	int prom1=0, prom2=0;
	// variables de promedio
	//Modifique desde aqui

	 int j=0, k=0;
	for(int i=0; i<n; i++)
	{  
	    if(encuestado[i].grupo==1)
	    {
	        prom1=prom1+encuestado[i].icp;
	        j++;
	    }
	    
	      if(encuestado[i].grupo==2)
	    {
	        prom2=prom2+encuestado[i].icp;
	        k++;
	    }
	}
	prom1=prom1/j;
	prom2=prom2/k;
	
	cout<<"El promedio del grupo 1 es: "<<prom1<<endl;
	cout<<"El promedio del grupo 2 es: "<<prom2;
}
int main(){	
	int n=validar();
	struct persona encuestado[n];
	for(int i=0; i<n; i++){
		encuestado[i]=ingrese_persona();
	} 
	cout<<n<<endl;
	item_A(encuestado, n);
	item_B(encuestado, n);
}