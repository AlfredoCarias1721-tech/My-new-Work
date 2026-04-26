//programa que ingresamos una materia, promedio, y al final
//nos diga que si el promedio es >= 70 aprobamos la clase
//de lo contrario, que reprobamos la clase

#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string materia;
    double promedio;

    cout <<  "Ingrese la materia: ";
    getline(cin,materia);

    cout << "Ingrese el promedio: ";
    cin >> promedio;

    if (promedio >= 70)
    {
        cout << "Usted Aprob\xa2 la clase!" << endl << endl;

    }
    else 
    {
        cout << "Usted Reprob\xa2 la clase... " << endl << endl;
        
    }

    system("pause");
    return 0;
}