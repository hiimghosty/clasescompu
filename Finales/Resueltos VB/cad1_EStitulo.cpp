#include<iostream>
#include<cstring>
#define TAMMAXCAD 100
using namespace std;
void estitulo(char cad[]){
    
    int i=0, cont=0;
    
    while(cad[i]!='\0')
    {
        if(!(cad[0]>='A' && cad[0]<='Z') || (cad[i]>='!' && cad[i]<='/') )
        {
            cont++;
        }
        
        i++;
    }
    
    if(cont==0)
    {
        cout<<"ES titulo";
    }
    if(cont!=0)
    {
        cout<<"NO es titulo";
    }
}


int main(){
    char cad1[TAMMAXCAD];
    cin.getline(cad1,TAMMAXCAD);
    estitulo(cad1);
}