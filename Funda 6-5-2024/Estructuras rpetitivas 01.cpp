#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int i = 1;
    cout << "Ingrese un numero ";
    cin >> n;
    while (i < 10)
    {
        cout << n << "x" << i << "=" << n*i << "\n";
        i = i + 1;
    }
    return 0;
}