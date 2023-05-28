#include <iostream>
using namespace std;

void modificarCedula(int *x)
{
    *x = 545019;
}

int main()
{
    int cedula = 4950179;
    int *pt = &cedula;

    cout << "El valor de pt es:" << pt << endl;
    cout << "El valor de *pt es:" << *pt << endl;

    cout << "El valor de cedula es:" << cedula << endl;
    cout << "El valor de &cedula es:" << &cedula << endl;
    modificarCedula(pt);
    cout << "El nuevo valor de cedula"<<cedula<<endl;

    return 0;
}