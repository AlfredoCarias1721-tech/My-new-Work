#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    double resultado = (a + b) * (a - b);
    cout << "El resultado de (a+b)*(a-b) es: " << resultado << endl;
    return 0;
}
