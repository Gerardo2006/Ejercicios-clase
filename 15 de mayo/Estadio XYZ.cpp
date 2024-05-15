#include <iostream>
using namespace std;

int main()
{
    int sec, solg = 3, solp = 5, som = 8, tri = 15, pla = 20;

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
        int a;
        cout << "Ingrese la cantidad de entradas que quiere en sol general: \n";
        cin >> a;
        cout << "Selecciono " << a << " entradas por un precio de " << a * solg << "$";
        break;

        case 2:
        int b;
        cout << "Ingrese la cantidad de entradas que quiere en sol preferencial: \n";
        cin >> b;
        cout << "Selecciono " << b << " entradas por un precio de " << b * solp << "$";
        break;

        case 3:
        int c;
        cout << "Ingrese la cantidad deentradas que quiere en sombra: \n";
        cin >> c;
        cout << "Selecciono " << c << " entradas por un precio de " << c * som << "$";
        break;

        case 4:
        int d;
        cout << "Ingrese la cantidad de entradas que quiere en tirbuna: \n";
        cin >> d;
        cout << "Selecciono " << d << " entradas por un precio de " << d * tri << "$";
        break;

        case 5:
        int e;
        cout << "Ingrese la cantidad de entradas que quiere en platea: \n";
        cin >> e;
        cout << "Selecciono " << e << " entradas por un precio de " << e * pla << "$";
        break;

        default:
        cout << "No valor no valido";
        break;
    }
    return 0;
}