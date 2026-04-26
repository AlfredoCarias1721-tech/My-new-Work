#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    char historial;
    double prestamo;
    double salario;
    double otrasPropiedades;

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Historia crediticia (b/m): ";
    cin >> historial;

    cout << "Cantidad del prestamo: ";
    cin >> prestamo;

    cout << "Salario anual: ";
    cin >> salario;

    cout << "Valor de otras propiedades: ";
    cin >> otrasPropiedades;

    int puntos = 0;

    // Puntos por salario
    if (salario >= 0.5 * prestamo) {
        puntos += 5;
    } else if (salario >= 0.25 * prestamo) {
        puntos += 3;
    } else if (salario >= 0.10 * prestamo) {
        puntos += 1;
    } 

    // Puntos por otras propiedades
    if (otrasPropiedades >= 2.0 * prestamo) {
        puntos += 5;
    } else if (otrasPropiedades >= prestamo) {
        puntos += 3;
    }

    cout << "\nPuntos totales: " << puntos << endl;

    if ((historial == 'b' || historial == 'B') && puntos > 6) {
        cout << "Solicitud aceptada." << endl;
    } else {
        cout << "Solicitud rechazada." << endl;
    }
    system("pause");
    return 0;
}