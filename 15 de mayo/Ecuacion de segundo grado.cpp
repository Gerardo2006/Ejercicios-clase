#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,x1,x2,r;

    cout << "El programa resuelve ecuaciones de segundo grado\n";
    cout << "Ingrese a= ";
    cin >> a;
    cout << "Ingrese b= ";
    cin >> b;
    cout << "Ingrese c= ";
    cin >> c;

    if (a !=0 )
    {
        r = pow(b,2)-4*a*c;
        if (r >=0)
        {
            x1 = (-b+sqrt(r))/2/a;
            x2 = (-b-sqrt(r))/2/a;
            cout << "Las raices de la ecuaciones son: x1= \n" << x1 << "x2= \n" << x2 << "\n";
        }
        else
        {
            cout << "Da imaginario\n";
        }
    }
    else if (b != 0)
    {
        cout << "La ecuacion es lineal\n";
        x1 = -c/b;
        cout << "La raiz es: " << x1 << "\n";
    }
    else
    {
        cout << "Los datos ingresados son erroneos";
    }
    return 0;
    
}