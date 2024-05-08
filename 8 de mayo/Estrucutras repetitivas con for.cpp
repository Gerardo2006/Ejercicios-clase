#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 2; 
    cout << "Ingrese un valor entero n: ";
    cin >> n;
    for(i = 2; i <= n; i = i + 2)
    {
        cout << i << "\n";
    }
    return 0;
}