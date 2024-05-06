#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Ingrese un numero positivo n= ";
    cin >> n;
    i = 0;

    if(n<0)
    {
        cout << "Te falta verdad?, sabes leer?";
    }
    while(i < n)
    {
        cout << i << "\n";
        i= i+2;
    }
    return 0;
}