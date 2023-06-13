#include<iostream>
#include<cstring>
using namespace std;
#define TAMMAXCAD 1001

void modificarcadena(char cad[])
{
    int a;
    a=strlen(cad)-1;
    char cad2[a];
    for(int i=0; i<strlen(cad); i++)
    {
        cad2[a]=cad[i];
        a--;
    }
    
    
    for(int i=0; i<strlen(cad); i++)
    {
        cout<<cad2[i];
    }
}

int main(){
    //IMPLEMENTAR
    char cad[TAMMAXCAD];
    cin.getline(cad, sizeof(cad));
    modificarcadena(cad);
    return 0;
}
