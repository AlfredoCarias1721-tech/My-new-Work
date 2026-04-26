#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    cout << "Ingrese dos números: ";
    cin >> n1 >> n2;

    if (n1 != 50 && n2 != 50) {
        cout << "El producto es: " << n1 * n2 << endl;
    } else {
        cout << "No se calcula el producto porque uno de los números es 50." << endl;
    }
    return 0;
}
