//ifAnidado.cpp : Este archivo contiene la funcion main la ejecucion del programa comienza y termina ahi

#include <iostream>
using namespace std;

int main ()
{
    int promedio;
    cout << "\n Inggrese el promedio: ";
    cin >> promedio;

    //si promedio es mayor o igual a 0 y promedio menor o igual que 100, entonces
    if (promedio >= 0 && promedio <= 100)
    {
        //si elpromedio es menor o igual a 25 entonces
        if (promedio < 35)
        {
            //imprimir promedio insuficiente
            cout << "\n" << "Promedio insuficiente \n\n";

        }
        else // si no
        {
            //si promedio esmenor que 70, entonces
            if (promedio < 70)
            {
                //imprimir reprobado
                cout << "\n" << " reprobado \n\n";

            }
            else //sino
            {
                //imprimir aprobado
                cout << "\n" << " aprobado \n\n";
            }//fin del si
        }//fin del si
    }
    else //si no
    {
        cout << "\n" << " error al ingresar promedio \n\n";
    }
    system("pause"); //realizar una pausa
    return 0;
}