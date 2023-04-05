#include<iostream>
using namespace std;

int cargaDeVector(){
    int n;
    cin>>n;
}

int main(){
    int vector[9];
    for(int i=0; i<9; i++){
        vector[i]=cargaDeVector();
        cout<<vector[i];
    }


    return 0;
}