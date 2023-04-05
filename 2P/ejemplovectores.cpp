#include<iostream>
using namespace std;

int cargaDeVector(){
    int n;
    cin>>n;
    return n;
}

void impresionDeVector(int vector[]){
    for(int i=0; i<9; i++){
        cout<<vector[i]<<" ";
    }
}
int main(){
    int vector[9];
    for(int i=0; i<9; i++){
        vector[i]=cargaDeVector();
    }
    cout  << "El vector es: "<<endl;
    impresionDeVector(vector);

    return 0;

    }


