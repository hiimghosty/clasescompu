#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int validar();
int main(){
 int n,aux=0;
 n=validar();
 for(int i=0;i<n;i++){
  float x,y;
  do{
   x=(float(rand()))/1000000;
  }while(x<0 || x>1);
  do{
   y=(float(rand()))/1000000;
  }while(y<0 || y>1);
  if(y>pow(x,2) and y<sqrt(x)){
   aux++;
  }
 }
 cout<<float(aux)/float(n);
}

int validar(){
 float N;
 do{
  cout<<"ingrese un nro";
  cin>>N;
 }while(N<0 || N!=int(N));
 return int(N);}

