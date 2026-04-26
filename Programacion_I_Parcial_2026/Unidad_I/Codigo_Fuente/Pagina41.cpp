// Fares_Salario1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
using namespace std;

int main()
{
    //Declarar variables
    string vNom;
    float vsueldo;
    float vsuelhora;

    // Solicitar el nombre del empleado y almacenarlo
    // en la variable vNom
    cout << "Empleado:" << endl;
    cin >> vNom;

    // Solicitar el sueldo del empleado y almacenarlo
    // en la variable vsueldo
    cout << "Sueldo:" << endl;
    cin >> vsueldo;

    // calcular el salario por hora
    vsuelhora = vsueldo / 30 / 8;

    // Mostrar el nombre del empleado y sueldo hora
    cout << vNom << " tiene un sueldo hora de: " << vsuelhora << endl;
}
