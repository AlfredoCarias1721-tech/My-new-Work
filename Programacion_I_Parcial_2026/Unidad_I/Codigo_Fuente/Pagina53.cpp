//iFCompuesto.cpp Este archivo contiene la funcion main, la ejecucion del programa comienza y termina ahi

#include <iostream>
using namespace std;

int main ()
{
    //declarar variables
    float vihss, vsalario;

    //inicializar variables
    vihss = 0;
    vsalario  = 0;

    cout << "\n Ingrese el sueldo: ";
    cin >> vsalario;

    //realizar el calculo del ihss
    if (vsalario <= 9326)
    {
        vihss = vsalario *  0.05;
    }
    else
    {
        vihss = 9326 * 0.05;
    }

    //mostrar el ihss

    cout << "\n IHSS:" << vihss << endl << endl;

    system("pause");
    return 0;
    

}