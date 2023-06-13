#include<iostream>
using namespace std;

/*Funcion que retorna 1 si el año es bisiesto, y 0 en caso contrario*/
int esBisiesto(int a){
    return ((a%4==0 && a%100!=0) || a%400==0);
}

/*Funcion que retorna la cantidad maxima de dias en un determinado mes*/
int cantMaxDiaMes(int m, int a){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) return 31;
    if(m==4 || m==6 || m==9 || m==11) return 30;
    if(m==2){
        if(esBisiesto(a)) return 29;
        else return 28;
    }
    return -1;
}

void fechaValida(char fecha[]){
    //Implementar aquí lo solicitado
    int dia, mes, anho, diaMax;
    dia=(fecha[0]-'0')*10+(fecha[1]-'0');
    mes=(fecha[3]-'0')*10+(fecha[4]-'0');
    anho=(fecha[6]-'0')*1000+(fecha[7]-'0')*100+(fecha[8]-'0')*10+(fecha[9]-'0');
    diaMax=cantMaxDiaMes(mes, anho);
    if(dia<=diaMax && mes<=12 && anho>=1900 && anho<=2100)
    {
        cout<<"La fecha ingresada es valida.";
    }
    else
    {
        cout<<"La fecha ingresada es invalida!";
    }
    
}

int main(){
    char fecha[11];
    cin>>fecha;
    fechaValida(fecha);
	return 0;
}
