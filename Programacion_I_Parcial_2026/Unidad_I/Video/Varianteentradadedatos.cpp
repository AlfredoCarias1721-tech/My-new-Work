#include <iostream>
using namespace std;

int main() {
    // VARIACIÓN 1: El ejemplo clásico del video (con enteros)
    // Declaramos las variables en una sola línea para ser eficientes.
    int n1, n2, suma; 

    cout << "--- VARIACION 1 (Enteros) ---" << endl;
    cout << "Ingresa un numero: ";
    cin >> n1; // Capturamos el primer valor
    cout << "Ingresa otro numero: ";
    cin >> n2; // Capturamos el segundo valor

    suma = n1 + n2;
    cout << "La suma es: " << suma << endl << endl;


    // VARIACIÓN 2: Uso de 'double' para mayor precisión
    // El instructor menciona luego que para fórmulas matemáticas 
    // es mejor usar double por el manejo de decimales.
    double d1, d2, resultado;

    cout << "--- VARIACION 2 (Decimales) ---" << endl;
    cout << "Ingresa un numero con decimales: ";
    cin >> d1;
    cout << "Ingresa otro: ";
    cin >> d2;

    resultado = d1 + d2;
    cout << "El resultado preciso es: " << resultado << endl << endl;


    // VARIACIÓN 3: Entrada encadenada (Simplificación)
    // Una forma más rápida que permite al usuario ingresar 
    // varios datos seguidos separados por un espacio.
    int x, y;
    cout << "--- VARIACION 3 (Entrada multiple) ---" << endl;
    cout << "Ingresa dos numeros separados por un espacio: ";
    cin >> x >> y; // Captura ambos de un solo golpe
    cout << "Sumamos " << x << " + " << y << " y nos da: " << x + y << endl;

    return 0;
}