#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

int convertirBinarioADecimal(char nroBin[]){
    //Implementar aquí lo solicitado
    int n, nro=0;

    int a;
    a=0;
    for(int i=strlen(nroBin)-1; i>=0; i--)
    {
        nro=nro+(nroBin[i]-'0')*pow(2,a);
        a++;
      
    }
    
    return nro;
}

int main(){
    char binario[31];
    cin>>binario;
    cout<<"El equivalente en sistema decimal es: "<<convertirBinarioADecimal(binario);
	return 0;
}
