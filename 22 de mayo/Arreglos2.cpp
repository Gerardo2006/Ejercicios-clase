#include <iostream>
using namespace std;

int main()
{

    string nombres[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Introduzca un nombre: \n";
        cin >> nombres[i];
    }

    for(int j = 0; j < 5; j++)
    {
        cout << "Nombre " << j + 1 << " " << nombres[j] << "\n";
    }
    return 0;
}