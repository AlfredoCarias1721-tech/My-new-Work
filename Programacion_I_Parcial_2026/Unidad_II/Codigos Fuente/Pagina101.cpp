//Archivo: Pagina101.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Programa que recorre un array de sueldos y calcula su suma total

//Arreglo2.cpp: este archivo contiene la funcion "main. La ejecucion del programa comien<a y termina ahi
//
#include <iostream>
using namespace std;
int main ()
{
    int vSueldos[] = { 5000, 6000, 7890, 15000, 16780, 10000, 9000};
    int vSuma = 0;
    for (int i = 0; i < 7; i++)
    {
        //mostrar el valor en la posicion i en vSueldos
        cout << vSueldos[i] << endl;

        /*Incrementar el valor de vSuma en el valor de la posicion
        i en vsueldos*/
        vSuma = vSuma + vSueldos[i];
    } //fin del for
    //mostrar la suma de todos los sueldos del vector
    cout << "\n La suma es: " << vSuma << endl << endl;

    system ("pause");
    return 0;
}