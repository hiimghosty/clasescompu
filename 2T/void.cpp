#include <iostream>
using namespace std;
void devuelveX(int x){
    cout << "x en la funcnio" <<x;
    //ACA x vale lo mismo que el main
    x=7; //ACA, YA VALEN DISTINTO
    cout << "x en la funcion "<<x;

}
int main (){
    int x=5;
    float a;
    char n;
    cout << "X vale" << x;
    devuelveX(x);
    //cout <<" X ahora vale " << x;
    return 0;
}