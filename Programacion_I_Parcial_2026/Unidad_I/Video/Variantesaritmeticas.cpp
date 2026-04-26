#include <iostream>
using namespace std;

int main() {
    // Declaración e inicialización en una sola línea [2]
    // Utilizando los valores fijos del ejemplo (8 y 2) [1]
    int a = 8, b = 2; 

    // VARIACIÓN 1 a 5: Operaciones directas en el cout [2, 3]
    cout << "El resultado de la suma es: " << a + b << endl;           // Suma: 10
    cout << "El resultado de la resta es: " << a - b << endl;          // Resta: 6
    cout << "El resultado de la multiplicacion es: " << a * b << endl; // Multiplicación: 16
    cout << "El resultado de la division es: " << a / b << endl;       // División: 4
    cout << "El resultado del modulo es: " << a % b << endl;           // Módulo (residuo): 0 [3]

    // VARIACIÓN 6: Asignación previa a una variable de resultado [4]
    int suma;              // Se crea la variable sin valor inicial [4]
    suma = a + b;         // Se le asigna la operación [4]
    cout << "El resultado (usando variable) es: " << suma << endl;

    return 0;
}