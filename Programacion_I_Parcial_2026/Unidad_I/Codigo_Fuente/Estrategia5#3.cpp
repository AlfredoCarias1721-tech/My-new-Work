//programa que pide dos numeros a y b, y muestra el resultado
//de (a+b)*(a-b)

#include <iostream>
using namespace std;

int main ()
{
    double a = 0, b = 0, resultado = 0;

    cout << "Ingrese el primer n\xa3mero: ";
    cin >> a;

    cout << "\nIngrese el segundo n\xa3mero: ";
    cin >> b;

    resultado = (a+b)*(a-b);

    cout << "\n El resultado de la operaci\xa2n (a+b)*(a-b) es: " << resultado << endl << endl;

    system("pause");
    return 0;

}