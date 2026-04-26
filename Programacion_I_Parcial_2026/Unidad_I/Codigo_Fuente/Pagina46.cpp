//PrubeaString.cpp : Este archivo contiene la funcin "main"  La ejecucion del programa comienza y termina ahi.

#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    cout <<  "Escriba tu nombre : ";
    string nombre;
    getline(cin,nombre);
    cout << "Hola " << nombre << endl;
    int num = nombre.size();
    cout <<  "\n\n Tu nombre tiene " << num << " caracteres" << endl << endl;

    system("pause");
    return 0;

}