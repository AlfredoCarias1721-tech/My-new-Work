#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cout << "Ingrese tres números (A, B, C): ";
    cin >> A >> B >> C;

    if (A > 20) cout << "a) A es mayor que 20" << endl;
    if (A < C) cout << "b) A es menor que C" << endl;
    if (B == C) cout << "c) B es igual a C" << endl;
    if (A != 3) cout << "d) A es diferente de 3" << endl;
    if (A * B == 50) cout << "e) A por B es igual a 50" << endl;
    if (C / B < A) cout << "f) C entre B es menor que A" << endl;
    if (C / B == -90) cout << "g) C entre B es igual a -90" << endl;
    if (A + B + C == 200) cout << "h) La suma es igual a 200" << endl;
    if ((A + B) == 8) cout << "i) A mas B es igual a 8" << endl;
    if ((A + B != 30) || (A - B == 100)) cout << "j) Condicion J cumplida" << endl;
    if (A > 15 && B < 3) cout << "k) A > 15 y B < 3" << endl;

    return 0;
}
