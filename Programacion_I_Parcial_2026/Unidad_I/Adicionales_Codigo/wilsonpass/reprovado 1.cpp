#include <iostream>
using namespace std;

int main() {
    double nota;
    cout << "Ingrese la nota promedio: ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "Error al ingresar el promedio (debe ser entre 0 y 100)." << endl;
    } else if (nota <= 35) {
        cout << "Insuficiente" << endl;
    } else if (nota < 70) {
        cout << "Reprobado" << endl;
    } else {
        cout << "Aprobado" << endl;
    }
    return 0;
}
