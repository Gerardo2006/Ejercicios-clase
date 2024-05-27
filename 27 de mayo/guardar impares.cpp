#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;
    int num[n];
    int imp[n];
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese numeros enteros :";
        cin >> num[i];

        if(num[i] % 2 != 0)
        {
            imp[j] = num[i];
            j++;
        }
    }
    cout << "El arreglo original es: ";
    for(int i = 0; i < n; i++)
    {
        cout << num[i] << "\n";
    }
    cout << "El arreglo impar es: ";
    for(int k = 0; k < j; k++)
    {
        cout << imp[k] << "\n";
    }
    return 0;
}