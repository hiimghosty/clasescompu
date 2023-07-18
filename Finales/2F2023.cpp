#include <iostream>
#include <cstring>
#include <cstdlib>
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

bool esanhoBisiesto(int anho)
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
        if (esanhoBisiesto(anho))
            return 29;
        else
            return 28;
    }
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12)
        return 31;
    else
        return 30;
}

void convertirTimeStamp(long long timestamp, DateTime *fh)
{
    int SEGUNDOS_POR_MINUTO = 60;
    int MINUTOS_POR_HORA = 60;
    int HORAS_POR_DIA = 24;
    int MESES_POR_anho = 12;
    long long SEGUNDOS_POR_anho = (long long)SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA * HORAS_POR_DIA * 365;
    int anho_INICIAL = 1970;

    long long totalSegundos = timestamp;

    (*fh).anho = anho_INICIAL;
    // (*fh).anho;
    while (totalSegundos >= SEGUNDOS_POR_anho + esanhoBisiesto((*fh).anho) * 86400)
    {
        totalSegundos -= (SEGUNDOS_POR_anho + esanhoBisiesto((*fh).anho) * 86400);
        (*fh).anho++;
    }

    (*fh).mes = 1;
    while (totalSegundos >= obtenerDiasEnMes((*fh).mes, (*fh).anho) * 86400)
    {
        totalSegundos -= (obtenerDiasEnMes((*fh).mes, (*fh).anho) * 86400);
        (*fh).mes++;
    }

    (*fh).dia = 1;
    while (totalSegundos >= 86400)
    {
        totalSegundos -= 86400;
        (*fh).dia++;
    }

    (*fh).hora = totalSegundos / (SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA);
    totalSegundos %= (SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA);

    (*fh).minuto = totalSegundos / SEGUNDOS_POR_MINUTO;
    (*fh).segundo = totalSegundos % SEGUNDOS_POR_MINUTO;
}

void formatearFechaHora(DateTime fh, char cadena[])
{

    /*strcpy(cad1,cad2); -----> copia la cad2 en la cad1

    strcat(cad1,cad2); -----> concatena las cadenas cad1 y cad2 (el resultado queda en cad1)*/
    // AAAA-MM-DD HH:MM:SS
    char anho[5];
    itoa(fh.anho, anho, 10);
    char mes[3];
    itoa(fh.mes, mes, 10);
    char dia[3];
    itoa(fh.dia, dia, 10);
    char hora[3];
    itoa(fh.hora, hora, 10);
    char minuto[3];
    itoa(fh.minuto, minuto, 10);
    char segundo[3];
    itoa(fh.segundo, segundo, 10);

    strcpy(cadena, anho);
    strcat(cadena, "-");
    if (fh.mes < 10)
        strcat(cadena, "0");
    strcat(cadena, mes);
    strcat(cadena, "-");
    if (fh.dia < 10)
        strcat(cadena, "0");
    strcat(cadena, dia);
    strcat(cadena, " ");
    if (fh.hora < 10)
        strcat(cadena, "0");
    strcat(cadena, hora);
    strcat(cadena, ":");
    if (fh.minuto < 10)
        strcat(cadena, "0");
    strcat(cadena, minuto);
    strcat(cadena, ":");
    if (fh.segundo < 10)
        strcat(cadena, "0");
    strcat(cadena, segundo);
    cout << "Fecha y hora UTC: ";
    cout << cadena;
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
    char cadena[100];
    formatearFechaHora(fecha, cadena);
    return 0;
}
