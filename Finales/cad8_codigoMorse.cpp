#include<iostream>
#include<cstring>
using namespace std;
#define TAMMAXCAD 1001

int main(){
    //IMPLEMENTAR
    char morse[10][6]={".----","..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
    char nros[10]={'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char entrada[TAMMAXCAD];
    cin.getline(entrada, sizeof(entrada));
    char aux[6];
    int k=0;
    for(int i=0; i<strlen(entrada); i++)
    {
        if(entrada[i]!=' ')
        {
            aux[0+k]=entrada[i];
            k++;
            aux[5]='\0';
            
            if(k==5)
        {
            for(int j=0; j<10; j++)
            {
                if(strcmp(morse[j],aux)==0)
                {
                    cout<<nros[j];
                    
                    if(entrada[i+2]==' ')
                    {
                        cout<<" ";
                    }
                }
                
            }
            
            k=0;
        }
        
        }
        
        
    }
    
    return 0;
}
