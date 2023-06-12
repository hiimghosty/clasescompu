#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char cad1[20];
    char cad2[20];
    cin >> cad1;
    cin >> cad2;
    if (strcmp(cad1,cad2) == 0) cout << "Ambas cadenas son iguales";
    else cout <<"SOn distintas";
    return 0;
}