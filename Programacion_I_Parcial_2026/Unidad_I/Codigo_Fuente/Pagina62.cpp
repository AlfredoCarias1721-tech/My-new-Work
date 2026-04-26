//ifmultiple.cpp : este archivo contiene la funcion 
//main. la ejecucion del programa comienza y termina ahi

#include <iostream>
using namespace std;
int main ()
{
    //declarar variables
    float cantidad, precio, totalpagar;

    //inicializar valores
    cantidad = 0;
    totalpagar = 0;
    precio = 900;

    //solicitar cantidad
    cout <<  "\n Cantidad de pantalones: ";
    cin >> cantidad;
    //si la cantidad es mayor o igual a 0 y menor de e5 entonces
    if (cantidad >= 0 && cantidad < 5)
    {
        totalpagar = cantidad * precio; //realizar calculo
    }
    //sino entonces si cantidad es mayor o igual a 5
    //y menor que 13, entonces
    else if (cantidad >=5 && cantidad < 12)
    {
        //realizar calculo
        totalpagar = cantidad * precio * 0.85;
    }
    //si no entonces si cantidad esmayor o igual a 12, entonces
    else if (cantidad >= 12)
    {
        //realizar calculo
        totalpagar = cantidad * precio * 0.70;
    }

    else // si ni nguna de las anteriores es cierta
    {
        //imprimir la cantidad no puede ser negativa
        cout << "\n La cantidad no puede ser negativa \n\n";
    }

    //mostrar el total a pagar
    cout << "\n" << "Total a pagar: " << totalpagar << "\n\n";
    system("pause");
    return 0;
    
}