#include <iostream>
using namespace std;

int main()
{
    float a1 = 0.00, a2 = 0.00, suma, res;
    cout << "Calcular el tercer angulo de un triangulo\n";
    cout << "Ingrese el primer angulo: \n";
    cin >> a1;
    cout << "Ingrese el segundo angulo: \n";
    cin >> a2;

    if( (a1 < 0 || a2 < 0) || (a1 > 180 || a2 > 180) )
    {
        cout << "Uno de los valores no es valido\n";
    }
    else
    {
       suma = a1 +a2;
       res = 180 - suma;

       cout << "El tercer angulo vale " << res; 
    }
    return 0;
}
