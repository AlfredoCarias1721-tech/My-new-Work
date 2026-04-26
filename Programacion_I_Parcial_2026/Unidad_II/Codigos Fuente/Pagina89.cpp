//Archivo: pagina89.cpp
//Alumno: Jose Alfredo Carias Figueroa
//Fecha: 4/4/2026
//Descripcion: Genera la tabla de multiplicar de un número usando setw() para alinear las columnas

//UsoFor.4.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int vNumTabla{};
    cout <<  "Escriba un n\xa3mero entero para crear la tabla: ";
    std::cin >> vNumTabla;

    for(unsigned long long n{ 1 }, vPro{}; n <=10; ++n)
    {
        vPro = vNumTabla * n; //acumular el producto en vpro

        //Mostrar la tabla de multiplicar

        cout << setw(5) << vNumTabla << setw(5) << "x" << setw(5) << n
        << setw(5) << "= " << setw(5) << vPro << endl;

    }
system("pause");
return 0;

}