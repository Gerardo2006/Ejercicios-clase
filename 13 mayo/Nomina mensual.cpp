#include <iostream>
#include <string>
using namespace std;

int main()
{
    float horas, pago_n, impuestos, horas_e = 1.5;
    cout << "Ingrese la cantidad de horas que tabajo el empleado: ";
    cin >> horas;

    if(horas <= 160 && horas > 0)
    {
        pago_n = horas * 10;
        cout << "Se le pagaran a " << pago_n << "$" << "\n";
    }
    else
    {
        pago_n = horas * 10 * horas_e;
        cout << "Se le pagaran a " << pago_n << "$" << "\n";
    }
    if(pago_n < 2000)
    {
        cout << "Libre de impuestos" << "\n";
    }
    else if (pago_n >= 2000 && pago_n < 2200)
    {
        impuestos = pago_n * 0.2;
        cout << "Con impuesto del 20% = " << impuestos << "\n";
    }
    else
    {
        impuestos = pago_n * 0.3;
        cout << "Con un impuesto del 30% = " << impuestos << "\n";
    }
    cout << "Su pago total es de: " << pago_n - impuestos << "$";
   return 0;
}