#include <iostream>
using namespace std;

int main()
{
    float nota[6];
    float pro = 0;
    for(int i = 0; i < 6; i++)
    {
        cout << "Introduzca sus notas:" << i + 1 << "\n";
        cin >> nota[i];

        pro = pro + nota[i];
    }
    cout << "Su promedio es de: " << pro/6 << "\n";
    return 0;
}