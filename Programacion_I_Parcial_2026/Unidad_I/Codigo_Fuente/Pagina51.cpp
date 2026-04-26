//ifsimple.cpp ; este archivo contiene la funcion main, la ejecucion del programa comienza y termina ahi

#include <iostream>
using namespace std;

int main ()
{
    //declarar variables
    float vcooperativa, vdeducciones, vihss, vrap, vsalario, vsueldoneto;

    //Inicializar variables

    vcooperativa = 0;
    vdeducciones = 0;
    vihss = 0;
    vrap = 0;
    vsalario = 0;
    vsueldoneto  = 0;

    cout << "\n Ingrese el sueldo: ";
    cin >> vsalario;

    //realizar el calculo del ihss
    if (vsalario <= 9326)
    {
        vihss = vsalario * 0.05;
    }

    //realizar resto de calculos
    vrap = vsalario * 0.015;
    vcooperativa = vsalario * 0.05;
    vdeducciones = vihss + vrap + vcooperativa;
    vsueldoneto = vsalario - vdeducciones;

    cout << "\n IHSS: " << vihss;
    cout << "\n RAP: " << vrap;
    cout << "\n Cooperativa: " << vcooperativa;
    cout << "\n Total deducciones: " << vdeducciones;
    cout << "\n Total a pagar: " << vsueldoneto << endl << endl;

    system("pause");
    return 0;
    
}