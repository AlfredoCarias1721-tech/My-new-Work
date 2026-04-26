//Archivo: Pagina100.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Introducción a Arreglos (vectores) almacenando y mostrando notas parciales

//arreglos1.cpp este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi
//
#include <iostream>
using namespace std;
int main ()
{
    int vNota[4];
    int contador = 0;

    do
    {
        cout << "Introduzca la nora " << contador + 1 << ": ";
        /*La siguiente linea de codigo almacena el valor del usuario en la  posicion
        que representa la variable contador para la primera iteraciion es 0,
        en la segunda iteracion es 1 y asi sucesivamente*/
        cin >> vNota[contador];

        contador += 1; //Aumentar la variable contador en 1
    } while (contador < 4); //verificar que contador sea < 4
    cout << "\n  La nota del segundo parcial es: " << vNota[1] << endl << endl;

    system("pause");
    return 0;
    
    


}