#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingrese su edad: \n";
    cin >> edad;

    if(edad >= 18)
    {
        cout << "Es mayor de edad";
    }
    else
    {
        cout << "Es menor de edad";
    }
    return 0;
}