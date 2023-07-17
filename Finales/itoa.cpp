#include<iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    int anho = 2023;
    char anio[5];
    itoa(anho,anio,10);
    cout << anio;

return 0;
}