#include<iostream>
#include<cstring>
using namespace std;
#define TAMMAXCAD 1001

void ordenar_cadena(char cad[])
{
    int pos_min=0;
    char aux;
    for(int i=0; i<strlen(cad); i++)
    {
        pos_min=i;
        
        for(int j=i+1; j<strlen(cad); j++)
        {
            if(cad[pos_min]>cad[j])
            {
                pos_min=j;
            }
        }
        
        aux=cad[i];
        cad[i]=cad[pos_min];
        cad[pos_min]=aux;
    }
    
    cout<<cad;
    
}

int main(){
    //IMPLEMENTAR
    char cad[TAMMAXCAD];
    cin.getline(cad, sizeof(cad));
    ordenar_cadena(cad);
    return 0;
}
