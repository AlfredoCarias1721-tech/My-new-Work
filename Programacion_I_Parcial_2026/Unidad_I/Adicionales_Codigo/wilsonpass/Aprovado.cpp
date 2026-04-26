#include <iostream>
#include <string>
using namespace std;

int main() {
    string materia;
    double promedio;

    cout << "Nombre de la materia: ";
    cin.ignore(); // Limpiar el buffer
    getline(cin, materia);
    cout << "Promedio obtenido: ";
    cin >> promedio;

    if (promedio >= 70) {
        cout << "Usted aprobó la clase de " << materia << endl;
    } else {
        cout << "Usted reprobó la clase de " << materia << endl;
    }
    return 0;
}
