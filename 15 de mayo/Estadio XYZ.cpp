#include <iostream>
using namespace std;

int main()
{
    int sec, total, solg = 3, solp = 5, som = 8, tri = 15, pla = 20;

    cout << "1) sol general\n";
    cout << "2) sol preferencial\n";
    cout << "3) Sombra\n";
    cout << "4) Tribuna\n";
    cout << "5) Platea\n";

    cout << "Seleccione una zona del estadio: \n";
    cin >> sec;

    switch(sec)
    {
        case 1:
        int cant;
        cout << "Ingrese la cantidad de entradas que quiere en sol general: \n";
        cin >> cant;
        cout << "Selecciono " << cant << " entradas por un precio de " << cant * solg << "$";
        break;

        case 2:
        int cant;
        cout << "Ingrese la cantidad de entradas que quiere en sol preferencial: \n";
        cin >> cant;
        cout << "Selecciono " << cant << " entradas por un precio de " << cant * solp << "$";
        break;

        case 3:
        
    }
}