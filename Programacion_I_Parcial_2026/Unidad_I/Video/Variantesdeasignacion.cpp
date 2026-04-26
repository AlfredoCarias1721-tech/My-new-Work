#include <iostream>
using namespace std;

int main() {
    // Definición de variables iniciales (valores del video: 8 y 7)
    int a = 8, b = 7, edad;

    // VARIACIÓN 1: Asignación directa entre variables
    // Se copia el valor de una variable a otra.
    edad = a; 
    cout << "Variacion 1 - La edad es: " << edad << endl; // Muestra 8

    // VARIACIÓN 2: Suma y asignación extendida
    // Se toma el valor actual de 'a' (8), se le suma 'b' (7) y se guarda el nuevo total en 'a'.
    a = a + b; 
    cout << "Variacion 2 - Nuevo valor de a (extendido): " << a << endl; // Muestra 15

    // Reiniciamos 'a' a su valor original para probar la simplificación
    a = 8; 

    // VARIACIÓN 3: Suma y asignación simplificada
    // Es el equivalente exacto a la Variación 2, pero con menos código.
    a += b; 
    cout << "Variacion 3 - Nuevo valor de a (simplificado): " << a << endl; // Muestra 15

    return 0;
}