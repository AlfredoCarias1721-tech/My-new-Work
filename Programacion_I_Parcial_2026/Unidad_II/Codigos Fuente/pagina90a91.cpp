//Archivo: Pagina91.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Uso del ciclo while para calcular el promedio de notas de una clase

//UsoWhile1.cpp : Este archivo contiene la funcion  "main. La ejecucion del programa "
//comienza y termina ahi.

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de varaibles
    string vOpcion;
    int vNota = 0, vSumaNotas = 0, vContador = 0;
    double vPromedio = 0;
    //Ejecutar el bucle mientras vOpcion sesa distinto de N y n
    while (vOpcion != "N" && vOpcion != "n")
    {
        vContador += 1; //incrementar vContador en 1
        cout << "Ingrese la nota del alumno " << vContador << ": ";
        cin >> vNota;
        vSumaNotas += vNota; //Acumular la suma de las notas en vSumaNotas

        cout << "Desea ingresar otra nota: ";
        cin >> vOpcion;
        system("cls");
    }
    //Almacena en vPromedio la division de vSUmaNotas entre vContador
    vPromedio = vSumaNotas / vContador;
    cout << "El promedio de las notas ingresadas es: ";
    cout << vPromedio << endl << endl;

    system("pause");
    return 0;}