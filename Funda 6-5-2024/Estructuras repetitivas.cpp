#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int i = 0;
    cout << "Ingrese un numero entero positivo";
    cin >> n;
    while(i<n)
    {
        cout << i << "\n";
        i = i+1;
    }
    return 0;
}