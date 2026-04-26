#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingrese el año: ";
    cin >> anio;

    // Regla: Divisible entre 4 Y (no divisible entre 100 O divisible entre 400)
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El año " << anio << " es bisiesto." << endl;
    } else {
        cout << "El año " << anio << " no es bisiesto." << endl;
    }
    return 0;
}
