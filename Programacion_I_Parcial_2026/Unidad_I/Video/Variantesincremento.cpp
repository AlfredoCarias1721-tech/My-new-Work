#include <iostream>
using namespace std;

int main() {
    // Definimos la variable base como en el video (valor 10)
    int a = 10;
    int resultado;

    // VARIACIÓN 1: Incremento (++)
    // Se utiliza para aumentar el valor de uno en uno
    resultado = ++a; 
    cout << "Variacion 1 - Incremento: Ahora la variable es: " << resultado << endl; // Muestra 11

    // Reiniciamos a para la siguiente prueba
    a = 10; 

    // VARIACIÓN 2: Decremento (--)
    // Se utiliza para disminuir el valor de uno en uno
    resultado = --a;
    cout << "Variacion 2 - Decremento: Ahora la variable es: " << resultado << endl; // Muestra 9

    return 0;
}