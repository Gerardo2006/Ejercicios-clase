#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a, b;
    b = 1 + rand () %3;
    cout << "1) Piedra\n";
    cout << "2) Papel\n";
    cout << "3) Tijeras\n";
    cin >> a;
    cout << "Maquina: "<< b << "\n";


    if(a == b)
    {
        cout <<"Empate";
    }
    else if((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2))
    {
        cout << "Gano!";
    }
    else
    {
        cout << "Perdio";
    }

}