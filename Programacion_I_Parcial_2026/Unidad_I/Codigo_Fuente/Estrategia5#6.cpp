//un programa que realice el producto de dos numeros
//´pero solamente de aquellos que son distintos de 50
 // !=: distinto de; diferente a;

#include <iostream>
using namespace std;
int main ()
{

    double num1 = 0, num2 = 0, producto = 0;

    cout << "Ingrese el primer n\xa3mero: ";
    cin >> num1;

    cout << "\nIngrese el segundo n\xa3mero: ";
    cin >> num2;

    if ((num1 != 50)&&(num2!=50))
    {
        producto = num1 * num2;
        cout << "\nEl producto de los 2 n\xa3meros distintos de 50 es: " << producto << endl << endl;
    }
    else {
        cout << "\nUno de los numeros es 50, no se puede realizar la operaci\xa2n " << endl << endl;
    }    

    system("pause");
    return 0;
    
    
}