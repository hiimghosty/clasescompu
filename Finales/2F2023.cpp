#include <iostream>
using namespace std;

struct DateTime
{
    int anho;
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
};

bool esAnioBisiesto(int anho)
{

    if (anho % 4 == 0)
    {

        if (anho % 100 == 0)
        {
            if (anho % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int obtenerDiasEnMes(int mes, int anho)
{
    /*Enero tiene 31 días,
    febrero 29 días,
     marzo 31,
     abril 30,
     mayo 31, junio 30,
     julio 31,
     agosto 31,
     septiembre 30,
     octubre 31,
     noviembre 30 y
     diciembre 31 días.*/
    if (mes == 2)
    {
        if (esAnioBisiesto(anho))
            return 29;
        else
            return 28;
    }
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12)
        return 31;
    else
        return 30;
}

void convertirTimeStamp(float timestamp, DateTime *fecha)
{
    float cantDias = timestamp / 86400;
    cout << "Tenemos " << cantDias << " dias" << endl;
    (*fecha).hora;
}

int main()
{
    DateTime fecha;
    fecha.anho = 1970;
    fecha.mes = 1;
    fecha.dia = 1;
    fecha.hora = 0;
    fecha.minuto = 0;
    fecha.segundo = 0;
    cout << "Introducir timestamp ";
    long long timestamp;
    cin >> timestamp;
    convertirTimeStamp(timestamp, &fecha);
    return 0;
}
