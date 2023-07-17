#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct FechaHora
{
    int anio;
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
};

bool esAnioBisiesto(int anio)
{
    if (anio % 4 == 0)
    {
        if (anio % 100 != 0 || (anio % 100 == 0 && anio % 400 == 0))
        {
            return true;
        }
    }
    return false;
}

int obtenerDiasEnMes(int mes, int anio)
{
    const int DIAS_POR_MES[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && esAnioBisiesto(anio))
    {
        return 29;
    }

    return DIAS_POR_MES[mes];
}

void convertirTimeStamp(long long timestamp, FechaHora *fh)
{
    const int SEGUNDOS_POR_MINUTO = 60;
    const int MINUTOS_POR_HORA = 60;
    const int HORAS_POR_DIA = 24;
    const int MESES_POR_ANIO = 12;
    const long long SEGUNDOS_POR_ANIO = (long long)SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA * HORAS_POR_DIA * 365;
    const int ANIO_INICIAL = 1970;

    long long totalSegundos = timestamp;

    fh->anio = ANIO_INICIAL;
    // (*fh).anio;
    while (totalSegundos >= SEGUNDOS_POR_ANIO + esAnioBisiesto(fh->anio) * 86400)
    {
        totalSegundos -= (SEGUNDOS_POR_ANIO + esAnioBisiesto(fh->anio) * 86400);
        fh->anio++;
    }

    fh->mes = 1;
    while (totalSegundos >= obtenerDiasEnMes(fh->mes, fh->anio) * 86400)
    {
        totalSegundos -= (obtenerDiasEnMes(fh->mes, fh->anio) * 86400);
        fh->mes++;
    }

    fh->dia = 1;
    while (totalSegundos >= 86400)
    {
        totalSegundos -= 86400;
        fh->dia++;
    }

    fh->hora = totalSegundos / (SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA);
    totalSegundos %= (SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORA);

    fh->minuto = totalSegundos / SEGUNDOS_POR_MINUTO;
    fh->segundo = totalSegundos % SEGUNDOS_POR_MINUTO;
}

void formatearFechaHora(FechaHora fh, char cadena[])
{

    /*strcpy(cad1,cad2); -----> copia la cad2 en la cad1

    strcat(cad1,cad2); -----> concatena las cadenas cad1 y cad2 (el resultado queda en cad1)*/
    // AAAA-MM-DD HH:MM:SS
    char anho[5];
    itoa(fh.anio, anho, 10);
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
    long long timestamp;
    cout << "Ingrese el timestamp en segundos: ";
    cin >> timestamp;

    FechaHora dt;
    convertirTimeStamp(timestamp, &dt);
    char cadena[100];
    formatearFechaHora(dt, cadena);

    return 0;
}