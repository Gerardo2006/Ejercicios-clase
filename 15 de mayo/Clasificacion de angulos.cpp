#include <iostream>
using namespace std;

int main()
{
    float angulo;
    cout << "Ingrese in angulo:\n";
    cin >> angulo;

    if(angulo < 90)
    {
        cout << "Su angulo es agudo";
    }
    else if(angulo > 90)
    {
        cout << "Su angulo es obtuso";
    }
    else
    {
        cout << "Su angulo es recto";
    }
    return 0;
}