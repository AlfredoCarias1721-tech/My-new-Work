#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables para los datos del solicitante
    string nombre;
    char historiaCrediticia;
    double cantidadPedida, salarioAnual, valorPropiedades;
    int puntos = 0;

    cout << "--- Sistema de Evaluación de Préstamos ---" << endl;

    // Entrada de datos
    cout << "Ingrese el nombre del solicitante: ";
    getline(cin, nombre);

    cout << "Historia crediticia ('b' para buena, 'm' para mala): ";
    cin >> historiaCrediticia;

    // Validación inicial: El banco solo considera a los de buen crédito
    if (historiaCrediticia != 'b' && historiaCrediticia != 'B') {
        cout << "\nLo sentimos, " << nombre << ". Solo se aceptan solicitudes con buen estado de credito." << endl;
        return 0; // Termina el programa
    }

    cout << "Cantidad de prestamo pedida: ";
    cin >> cantidadPedida;

    cout << "Salario anual: ";
    cin >> salarioAnual;

    cout << "Valor de otras propiedades: ";
    cin >> valorPropiedades;

    // --- Cálculo de puntos según las reglas ---

    // Regla 1: Salario vs Préstamo
    if (salarioAnual >= (cantidadPedida * 0.50)) {
        puntos += 5;
    } 
    else if (salarioAnual >= (cantidadPedida * 0.25)) {
        puntos += 3;
    } 
    else if (salarioAnual >= (cantidadPedida * 0.10)) {
        puntos += 1;
    }

    // Regla 2: Propiedades vs Préstamo
    if (valorPropiedades >= (cantidadPedida * 2.0)) {
        puntos += 5;
    } 
    else if (valorPropiedades >= cantidadPedida) {
        puntos += 3;
    }

    // --- Resultado Final ---
    cout << "\n------------------------------------------" << endl;
    cout << "Resultado para: " << nombre << endl;
    cout << "Puntaje total obtenido: " << puntos << " puntos." << endl;

    if (puntos > 6) {
        cout << "ESTADO: PRESTAMO APROBADO" << endl;
    } else {
        cout << "ESTADO: PRESTAMO RECHAZADO (Puntaje insuficiente)" << endl;
    }
    cout << "------------------------------------------" << endl;

    return 0;
}
