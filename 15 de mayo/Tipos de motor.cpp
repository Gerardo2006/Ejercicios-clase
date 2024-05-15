#include <iostream>
using namespace std;

int main()
{
    int tipoMotor;
    cout << "Motor de tipo 0\n";
    cout << "Motor de tipo 1\n";
    cout << "Motor de tipo 2\n";
    cout << "Motor de tipo 3\n";
    cout << "Motor de tipo 4\n";
    cout << "Seleccione un tipo de motor: \n";
    cin >> tipoMotor;

    switch(tipoMotor)
    {
        case 0:
        cout << "No esta establecidoun valor definido para el tipo de bomba\n";
        break;

        case 1:
        cout << "La bomba es una bomba de agua\n";
        break;

        case 2:
        cout << "La bomba es una bomba de gasolina\n";
        break;

        case 3:
        cout << "La bomba es una bomba de hormigon\n";
        break;

        case 4:
        cout << "La bomba es una bomba de pasta alimenticia\n";
        break;

        default:
        cout << "No existe un valor valido para tipo de bomba\n";
        break;
    }
    return 0;
}