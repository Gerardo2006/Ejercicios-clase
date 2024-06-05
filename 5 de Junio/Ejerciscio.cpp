#include <iostream>
#include <cmath>
using namespace  std;

int main()
{
    int menu;
    float pmens = 0;
    float SBR = 0;
    float prim = 0;
    float segu = 0;
    float Fi = 0;
    float factor = 0;

    int t = 0;
    int w = 0;
    float IBCC = 0;
    float IBCS = 0;
    int n = 0;
    float IPCR = 0.00;
    float IPCI = 0.00;
    int years = 0;



    cout << " --- Tipos de Pencion --- \n";
    cout << "1) Pension para los optados\n";
    cout << "2) Pension para los afiliados del Sistema Publico de Pensiones\n";
    cout << "3) Pension de los afiliados al Sistema Privado (AFP)\n";
    cout << "4) Salir\n";
    cin >> menu;
    
    switch(menu)
    {
        case 1:
        cout << "Ingrese la base de cotizacion del mes en colones: \n";
        cin >> IBCC;
        cout << "Ingrese la base de cotizacion del mes en dolares: \n";
        cin >> IBCS;
        cout << "Ingrese el numero de meses considerador para el calculo: \n";
        cin >> t;
        cout << "Ingrese el numero de meses posteriores al mes de diciembre de 2000: \n";
        cin >> w;
        cout << "Ingrese el valor determinado por numero de IBC: \n";
        cin >> n;

        Fi = IPCR / IPCI;


        for(int i = 1; i <= t-w; i++)
        {
            prim = ((IBCC * Fi) / 8.75) + prim;
        }
        for(int i = (t - w + 1); i <= t; i++)
        {
            segu = (IBCS * Fi) + segu;
        }

        SBR = (prim + segu) / n;

        cout << SBR;

        break;


    }
}