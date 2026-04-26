// Archivo: Pagina85a86.cpp
// Alumno: Jose Alfredo Carias Figueroa
// Fecha: 4/4/2026
// Descripcion: Calcula el salario de 10 empleados considerando
//              horas normales y horas extras con un 25% adicional

#include <iostream>
using namespace std;

int main()
{
    // declarar variables - todas como double porque manejan dinero con decimales
    double vSalarioHora, vHTrabajadas, vHorasNormales;
    double vHorasExtras, vSHorasNormales, vSHorasExtras, vTotalSueldo;

    // acumuladores - se inicializan en 0 para evitar valores basura de la memoria
    // funcionan como 3 cajas donde se va metiendo el dinero de cada empleado
    double vtShorasNormales = 0, vtSHorasExtras = 0, vtSalarioEmpleados = 0;

    // int porque el contador solo cuenta empleados completos, nunca decimales
    int vContador = 1;

    // variable constante - nunca cambia durante el programa
    vSalarioHora = 100;

    // el for sin inicializacion porque vContador ya fue declarado arriba
    // si lo declarara aqui adentro, no existiria fuera del for
    for (; vContador <= 10; vContador++)
    {
        // se reinician en 0 en cada vuelta para que los datos del empleado
        // anterior no contaminen el calculo del siguiente
        vSalarioHora = 0;
        vHTrabajadas = 0;
        vHorasNormales = 0;
        vHorasExtras = 0;
        vSHorasNormales = 0;
        vSHorasExtras = 0;
        vTotalSueldo = 0;

        // vContador cambia de valor de 1 en 1, por eso identifica a cada empleado
        cout << "\n Horas trabajadas del empleado " << vContador << ": ";
        cin >> vHTrabajadas;

        // el if/else no calcula nada todavia, solo clasifica las horas en dos grupos
        // si trabajo 40 o menos: todo son horas normales
        // si trabajo mas de 40: las primeras 40 son normales, el resto son extras
        // se resta 40 porque esas ya fueron contadas como horas normales
        if (vHTrabajadas <= 40)
        {
            vHorasNormales = vHTrabajadas;
            vHorasExtras = 0;
        }
        else
        {
            vHorasNormales = 40;
            vHorasExtras = vHTrabajadas - 40;
        }

        // ahora si se calculan los salarios usando los grupos del if/else
        // las extras se multiplican por 1.25 porque tienen 25% adicional
        vSHorasNormales = vHorasNormales * 100;
        vSHorasExtras   = vHorasExtras * 100 * 1.25;
        vTotalSueldo    = vSHorasNormales + vSHorasExtras;

        // se mete el dinero de este empleado en cada caja acumuladora
        // nuevo total de la caja = lo que ya tenia + lo de este empleado
        vtShorasNormales   = vtShorasNormales   + vSHorasNormales;
        vtSHorasExtras     = vtSHorasExtras     + vSHorasExtras;
        vtSalarioEmpleados = vtSalarioEmpleados + vTotalSueldo;
    }

    // al terminar el bucle, las cajas tienen la suma de los 10 empleados
    cout << "Total salario por horas normales: " << vtShorasNormales   << endl;
    cout << "Total salario por horas extras:   " << vtSHorasExtras     << endl;
    cout << "Total salario a pagar:            " << vtSalarioEmpleados << endl;

    system("pause");
    return 0;
}