#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char cad1[20] = "hola";
    char cad2[20] = "mundo";
    strcat(cad1,cad2);
    cout << cad1;
    
return 0;
}