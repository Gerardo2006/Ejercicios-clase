#include <iostream>
using namespace std;

int main()
{
    float corto1 = 0.00, corto2 = 0.00, parcial1 = 0.00, parcial2 = 0.00, lab = 0.00, proyecto = 0.00, pro = 0.00;
    string nombre;

    cout << "Ingrese su nombre:\n";
    cin >> nombre;
    cout << "Ingrese la nota del primer corto:\n";
    cin >> corto1;
    cout << "Ingrese la nota del segundo corto:\n";
    cin >> corto2;
    cout << "Ingrese la nota del primer parcial:\n";
    cin >> parcial1;
    cout << "Ingrese la nota del segundo parcial:\n";
    cin >> parcial2;
    cout << "Ingrese la nota del laboratorio:\n";
    cin >> lab;
    cout << "Ingrese la nota de el proyecto:\n";
    cin >> proyecto;

    pro = (corto1 * 0.1) + (corto2 * 0.1) + (parcial1 * 0.15) + (parcial2 * 0.2) + (lab * 0.2) + (proyecto * 0.25);

    if(pro >= 6)
    {
        cout << "Felicidades, paso la materia";
    }
    else
    {
        cout << "Reprobo, ah considerado cambiar de carrera?";
    }
    return 0;
}