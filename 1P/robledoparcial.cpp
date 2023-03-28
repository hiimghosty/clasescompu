#include<iostream>
#include<cmath>
using namespace std;

int validar(){
 float n;
 do{
  cin>>n;
  
 }while(n!=int(n) or n<=20);
 return n;
 
 
}

void imprimirdivisores(int n){
 
 cout<<"Divisores de "<<n<<": ";
 for(int i=n-1;i>=1;i--){
  if(n%i==0){
   cout<<i<<" "; 
   
  
  }
  
  
 }
 
 
 
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
  return true;
  
 }else{
  return false;
 }
 
  
}

bool esperfecto(int N){
 int sumaN=0;
 sumaN=sumaN+divisores(N);
 if(sumaN==N){
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
 if(nrosamigos(M,N)==true){
  cout<<endl<<"El numero "<<M<<" es amigo de "<<N;
 }else{
  if(nrosamigos(M,N)==false){
    cout<<endl<<M<<" y "<<N<<" NO son amigos";
  }
 }
 if(esperfecto(M)){
  cout<<"Es perfecto "<<M;
 }
 if(esperfecto(N)){
  cout<<"Es perfecto "<<N;
 }
 
 
 
 
 return 0;
}
