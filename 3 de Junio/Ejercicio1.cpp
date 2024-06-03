#include "iostream"
using namespace std;

int suma(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 + entero2);
    return resultado;
}

int resta(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 - entero2);
    return resultado;
}

int multiplicacion(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 * entero2);
    return resultado;
}

float division(float entero1, float entero2)
{
    float resultado = 0.00;
    resultado = (entero1 / entero2);
    return resultado;
}

int main()
{
    float n1 = 0, n2 = 0, respuesta = 0;
    n1 = 8;
    n2 = 6;

    respuesta = division(n1, n2);
    cout << "El valor de la suma de dos numeros enteros es: " << respuesta;

    return 0;

}