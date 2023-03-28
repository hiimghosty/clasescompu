#include<iostream>
#include<math.h>
using namespace std;
int validar(){
	float n;
	do{
		cout << "Introducir N entero y positivo"<<endl;
		cin>>n;
	} while(int(n)!=n or n<0);
	return n;
}
int main(){
	int n;
	n=validar();
	return 0;
}
