// un programa que solicite como dato de entrada una nota promedio y muestre como
//resltado si el alumno esta insuficiente( si el promedio es
// menor o igual a 35), reprobado(promedio mayor que 35 y menor que 70), aprobado(promedio mayor oigual que 70
//) y si se ingresa un promedio menor que 0 o mayor que 100 debe decir error al ingresar el promedio.

#include <iostream>
using namespace std;
int main ()
{
    double promedio;

    cout <<  "Ingrese el promedio: ";
    cin >> promedio;

    if (promedio < 0 || promedio > 100)
    {
        cout << "\nError al ingresar el promedio" << endl<< endl;

    }
    else if (promedio <= 35)
    {
        cout << "\nPromedio insuficiente" << endl << endl;
    }
    else if (promedio < 70 )
    {
        cout << "\nReprobado" << endl << endl;

    }
    else{
        cout << "\nAprobado" << endl << endl;
    }

    system("pause");
    return 0;
}