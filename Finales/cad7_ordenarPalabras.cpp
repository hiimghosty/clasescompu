#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N; //cantidad de palabras
    cin>>N;
    int i;
    char palabras[N][31]; //utilizaremos una matriz de caracteres, donde cada linea contendrá una palabra
    
    //Implementar aquí la solución
    
    for(int i=0; i<N; i++)
    {
        cin>>palabras[i];
    }
    char aux[31];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-1; j++)
        {
            if(strcmp(palabras[j],palabras[j+1])>0)
            {
                strcpy(aux,palabras[j]);
                strcpy(palabras[j],palabras[j+1]);
                strcpy(palabras[j+1],aux);
                
            }
        }
    }
    for(int i=0; i<N;i++)
    {
        cout<<palabras[i]<<endl;
    }
    
    
	return 0;
}