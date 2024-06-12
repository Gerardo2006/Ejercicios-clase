#include <iostream>
using namespace std;
constexpr int n = 6;

float *calculonotafin(float notas[][n], float ponderaciones[], int m)
{
    float notafinal[m];
    for(int j = 0; j < m; j++)
    {
        notafinal[j] = 0;
        for(int i = 0; i < n; i++)
        {
            notafinal[j] = notafinal[j] + notas[j][i] * ponderaciones[i];
        }
    }
    return notafinal;
}
int main()
{
    int m;
    float ponderaciones[n] = {0.15,0.2,0.1,0.1,0.2,0.25};
    cout << "Cuantos alumnos son: \n";
    string nombres[m];
    float notas[m][n];

    for(int i = 0; i < m; i++)
    {
        cout << "Nombre estudiante" << i + 1 << ": ";
        cin >> nombres[i];
        cout << nombres[i] << "Parcial 1: ";
        cin >> notas[i][0];
        cout << nombres[i] << "Parcial 2: ";
        cin >> notas[i][1];
        cout << nombres[i] << "Corto 1: ";
        cin >> notas[i][2]; 
        cout << nombres[i] << "Corto 2: ";
        cin >> notas[i][3];
        cout << nombres[i] << "Lab: ";
        cin >> notas[i][4]; 
        cout << nombres[i] << "Proyecto: ";
        cin >> notas[i][5]; 
    }
    float *notafinal = calculonotafin(notas,ponderaciones);

    for(int i = 0; i < n; i++)
    {
        cout << nombres[i] << " su nota final es: " << notafinal[i];
    }
    return 0;
}