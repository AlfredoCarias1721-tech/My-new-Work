//Archivo: Pagina96a97.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Uso de do-while para clasificar y sumar números pares e impares en un rango

//USODEWHILE1.CPP este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a= 0, b = 0, vSumaPar = 0, vSumaImpar = 0; //Declarar variables
    cout << "\n Introduzca el primer numero: ";
    cin >> a;

    cout << "\n Introduzca el segundo numero:  ";
    cin >> b;
    cout << endl << endl; //Provocar dos saltos de linea

    //verificar si b es menor que a
    if (b <= a)
    {
        //Mostrar el mensaje accion incorrecta
    cout << "\n Accion Incorrecta";

    }
    cout << setw(23) << "Numeros Pares" << setw(33) << "Numeros Impares" << endl;
    do
    {
        /*SI el resto de a entre b es igual a 0
        imprimir a y aumentar en a el valor de vSumaPar
        de lo contrario aumentar en a vSumaPar*/
        if (a % 2 == 0)
        {
            cout << setw(23) << a;
            vSumaPar += a; //aumentar el valor de vSumaPar
        }
        else
        {
            cout << setw(33) << a << endl;
            vSumaImpar += a; //aumentar en a el valor de vSumaimpar
        }
        a += 1; //aumentar en a el valor de vSumaImpar
    } while (a <= b);

    //Mostrar la suma de los numeros pares e impares
    cout << "\n\n Totales:" << setw(15) << vSumaPar << setw(33) << vSumaImpar << endl << endl;
    system("pause");
    return 0;
    

}