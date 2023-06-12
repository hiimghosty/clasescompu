#include <iostream>
using namespace std;
int main()
{
    cout << "Introducir un numero";
    char cad1[20];
    cin >> cad1;
    int primerDigito;
    primerDigito = cad1[0] - '0'; //Probar que pasa si sacamos "-'0'" y comparar con la tabla ascii
    cout << "El primer digito es" << primerDigito;
    return 0;
}