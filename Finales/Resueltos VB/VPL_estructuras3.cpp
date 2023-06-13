#include<iostream>
#include<cstring>
using namespace std;

struct Fecha{
    int dia,mes,anho;
};

/*Esta función devuelve true si el anho es bisiesto, y false en caso contrario*/
bool esBisiesto(int anho){
    if((anho%400==0 || (anho%4==0 && anho%100!=0)))
        return true;
    else
        return false;
}

Fecha extraerDatos(char cadena[]){
    //Completar la función que extrae los datos de la cadena y carga la estructura (retornando esta estructura al final)
	Fecha fecha;
	fecha.dia=((cadena[0]-'0')*10+(cadena[1]-'0'));
	fecha.mes=((cadena[3]-'0')*10+(cadena[4]-'0'));
	fecha.anho=((cadena[6]-'0')*1000+(cadena[7]-'0')*100+(cadena[8]-'0')*10+(cadena[9]-'0'));	
	return fecha;
}

int obtenerNumeroDeDiasEnUnMes(int mes, int anho){
    //Completar la función que obtiene (y retorna) la cantidad de días en un determinado mes (teniendo en cuenta los años bisiestos).
	int dias;
	if(esBisiesto(anho))
	{
	    dias=29;
	}
	else
	{
	    dias=28;
	}
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	{
	    dias=31;
	}
	if(mes==4 || mes==6 || mes==9 || mes==11)
	{
	    dias=30;
	}
	return dias;
}
void mostrarfecha(Fecha fecha)
{
    if(fecha.dia<10)
    {
        cout<<0;
    }
    cout<<fecha.dia<<"/";
    if(fecha.mes<10)
    {
        cout<<0;
    }
    cout<<fecha.mes<<"/"<<fecha.anho;
}
void indicarFechaValida(Fecha fecha){
    /*Completar la función que valida la fecha de entrada (estructura) e imprime el mensaje 
    correspondiente (de acuerdo al formato definido en el enunciado del problema)*/
    int diaMax=obtenerNumeroDeDiasEnUnMes(fecha.mes, fecha.anho);
    bool esfechaValida= fecha.dia<=diaMax && fecha.mes<=12 && fecha.anho>=1900 && fecha.anho<=2100;
    mostrarfecha(fecha);
    if(!(esfechaValida))
    {
        cout<<" NO es una fecha valida";
    }
    else
    {
        cout<<" es una fecha valida";
    }
    
}

int main(){
    // NO MODIFICAR EL MAIN!
	int opcion;
	//ESTA OPCION SIRVE PARA EVALUAR DE FORMA INDEPENDIENTE LAS 3 FUNCIONES REQUERIDAS
	cin>>opcion;
	char cadena[12];
	Fecha fecha;
	if(opcion==1){//SECCION QUE EVALUA LA FUNCION EXTRAER DATOS
	    cin>>cadena;
	    fecha=extraerDatos(cadena);
        cout<<"Los datos de la fecha son:"<<endl;
        cout<<"dia: "<<fecha.dia<<endl;
        cout<<"mes: "<<fecha.mes<<endl;
        cout<<"anho: "<<fecha.anho;
	}
    if(opcion==2){//SECCION QUE EVALUA LA FUNCION QUE OBTIENE EL NUMERO DE DIAS DEL MES
        cin>>fecha.mes;
        cin>>fecha.anho;
		cout<<"El mes "<<fecha.mes<<" anho "<<fecha.anho<<" tiene "<<obtenerNumeroDeDiasEnUnMes(fecha.mes,fecha.anho)<<" dias";
    }    
	if(opcion==3){//SECCION QUE EVALUA LA VALIDACION DE LA FECHA
	    cin>>fecha.dia;
	    cin>>fecha.mes;
        cin>>fecha.anho;
        indicarFechaValida(fecha);
	}
	return 0;
}