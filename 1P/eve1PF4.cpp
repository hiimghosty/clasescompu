#include<iostream>
using namespace std;

int validarDia(){
//Dia debe estar entre 1 y 31
    int dia;
    do{
        cout << "Introducir dia" << endl;
        cin >> dia;

    } while(dia<1 or dia>31);
    return dia;
}

int validarMes(){
//Mes entre 1 y 12
    int mes;
    do{
        cout << "Introducir mes" << endl;
        cin >> mes;

    } while(mes<1 or mes>12);
    return mes;
}

int validarAnho(){
    int anho;
    do{
        cout << "Introducir anho" << endl;
        cin >> anho;

    } while(anho<1);
    return anho;
}

void imprimirFecha(int d, int m, int a){
    //imprimir en formato dd/mm/a
    cout << "La fecha es: ";
    if(d<10) cout<<"0";
    cout<<d<<"/";
    if(m<10) cout<<"0";
    cout<<m<<"/";
    cout<<a;
}

int sumaDeFecha(int d, int m, int a){
    int resultado=0;
    resultado = d + m + a;
    return resultado;
}

int calculoNumeroJugador(int numero){
    int digito,sumadigitos=0;
    while(true){

        while(numero>0){  
            digito=numero%10;
            sumadigitos=sumadigitos+digito;
            numero=numero/10;
        }

        if(sumadigitos>=1 and sumadigitos<=11) return sumadigitos;

        numero=sumadigitos;
        sumadigitos=0;
    }
}

int main(){
    int dia, mes, anho, sumafechas,numerojugador;
    dia = validarDia();
    mes = validarMes();
    anho = validarAnho();
    imprimirFecha(dia,mes,anho);
    sumafechas = sumaDeFecha(dia,mes,anho);
    numerojugador=calculoNumeroJugador(sumafechas);
    cout << "El numero de jugador es: " <<numerojugador;
    return 0;
}