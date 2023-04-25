#include<iostream>
#include<cmath>
using namespace std;

int validar(){
    int n;
    do{
        cin>>n;
    }while(n<=20);
    return n;
}

void imprimirdivisores(int n){
    cout<<"Divisores de "<<n<<": ";
    for(int i=n-1;i>=1;i--){
        if(n%i==0){
            cout<<i<<" "; 
        }
    }
    cout<<endl;
}

int divisores(int n){
    for(int i=n-1;i>=1;i--){
        if(n%i==0){
            return i; 
        }
    }
}

bool nrosamigos(int M,int N){
    int sumaM=0,sumaN=0;
    sumaM=sumaM+divisores(M);
    sumaN=sumaN+divisores(N);
    if(sumaM==N and sumaN==M and M!=N){
        cout<<"El numero "<<M<<" es amigo de "<<N<<endl;
        return true;
    }else{
        cout<<M<<" y "<<N<<" NO son amigos"<<endl;
        return false;
    }
}

bool esperfecto(int N){
    int sumaN=0;
    for(int i=N-1;i>=1;i--){
        if(N%i==0){
            sumaN+=i;
        }
    }
    if(sumaN==N){
        cout<<"El numero "<<N<<" es perfecto"<<endl;
        return true;
    }else{
        return false;
    }
}

int main(){
    int N,M;
    M=validar();
    N=validar();
    imprimirdivisores(M);
    imprimirdivisores(N);
    nrosamigos(M,N);
    esperfecto(M);
    esperfecto(N);
    if(!nrosamigos(M,N)){
        cout<<M<<" y "<<N<<" NO son amigos"<<endl;
    }
    return 0;
}






