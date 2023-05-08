#include <iostream>
#include <cstring>
using namespace std;

void iniciarClase()
{
/*asdadada
asda

*/}

int main()
{
    char respuesta[20];

    cout << "Queremos que aprendas MAS, por eso te invitamos a participar del WORKSHOP DE C++ al costado de las H este Viernes a las 18hs";

    cout << "Ingresar estoy interesado o no estoy interesado";

    cin.getline(respuesta, 20);

    if (strcmp(respuesta, "Estoy interesado") == 0)
    {
        iniciarClase();
    }

    return 0;
}