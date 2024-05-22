#include <iostream>
using namespace std;

int main()
{
    int numeros[100];
    for(int i = 0; i < 100; i++)
    {
        numeros[i] = i + 1;
    }
    for(int j = 0; j < 100; j++)
    {
        cout << numeros[j] << "\n";
    }
    return 0;
}