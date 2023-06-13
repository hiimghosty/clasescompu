#include<iostream>
#include<cstring>
using namespace std;
void sinespacios(char cad[]){
 //escriba su codigo
 char x=0;
 for(int i=0; i<strlen(cad); i++)
 {
     for(int j=0; j<strlen(cad); j++)
     {
         if(cad[j]==' ' || cad[j]=='\t')
         {
             x=cad[j];
             cad[j]=cad[j+1];
             cad[j+1]=x;
             
         }
         
     }
 }
 
 for(int i=0; i<strlen(cad); i++)
 {
        cout<<cad[i]; 
 
 }
 
 
}

int main(){
    char cad1[100];
    cin.getline(cad1,100);
    sinespacios(cad1);
}