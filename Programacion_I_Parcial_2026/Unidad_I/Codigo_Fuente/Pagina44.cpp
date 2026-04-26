// CInIgnore.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi.

#include <iostream> //Libreria que permite entrada y salida de caracteres
using namespace std;

int main()
{
    char vNombre, vApellidos; //Declaracion de variables (tipo char)
    cout << "Escriba su primer nombre: ";
    vNombre = cin.get(); //para tomar solo la primera inicial del nombre

    cout << "Escriba sus dos apellidos: ";
    cin.ignore(100, ' '); // para ignorar hasta 100 caracteres y el caracter espacio
    vApellidos = cin.get();

    cout << "Las iniciales de su primer nombre y segundo apellido son: " << vNombre
    << " " << vApellidos << "\n\n";

    system("pause"); //realizar una pausa
    return 0; // finaliza programa

}