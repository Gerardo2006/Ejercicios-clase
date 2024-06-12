#include <iostream>
using namespace std;

float notafinal(float notas[5]);
int main()
{
    float c;
    float notas[5];

    cout << "Ingrese las notas en el siguiente orden: \n";
    cout << "Parcial 1\n" << "Parcial 2\n" << "Corto 1\n" << "Corto 2\n" << "Laboratorio\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> c;
        notas[i] = c;   
    }
    cout << "Sus notas son: \n";
    for(int j = 0; j < 5; j++)
    {
        cout << notas[j] << "\n";
    }

    cout << "Su nota final es: \n";
    cout << notafinal;
    return 0;
}

float notafinal(float notas[5])
{
    int res;
    for(int a = 0; a < 5; a++)
    {
        res += notas[a++];
    }
    return res;
}