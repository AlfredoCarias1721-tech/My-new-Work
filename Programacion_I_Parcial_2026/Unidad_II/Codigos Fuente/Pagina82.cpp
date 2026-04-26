//Archivo: Pagina82.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Esto es un programa que nos introduce a las secuencias repetitivas

//UsoFor1.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi

#include <iostream>
using namespace std;

int main ()
{
    //Declaro vContador como entero porque solo cuenta empleados (sin decimales)
    //Declaro vTotalIHSS como float e inicializo en 0 porque acumula dinero con decimales
    int vContador;
    float vTotalIHSS = 0;

    //El for recorre del empleado 1 al 5, aumentando de uno en uno con ++
    for (vContador = 1; vContador <= 20; vContador++)
    {
        //Variables temporales del empleado actual, se limpian con = 0 por seguridad
        float vIhss, vSalario;
        vIhss = 0;
        vSalario = 0;

        //Pido el salario al usuario y lo guardo en vSalario
        cout << "\n Salario del empleado: ";
        cin >> vSalario;

        //Si el salario no supera el tope, calculo sobre el salario real
        //De lo contrario, calculo solo sobre el tope maximo permitido (9326)
        if (vSalario <= 9326)
        {
            vIhss = vSalario * 0.05;
        }
        else
        {
            vIhss = 9326 * 0.05;
        }//fin del if

        //Sumo el IHSS de este empleado al total acumulado
        vTotalIHSS = vTotalIHSS + vIhss;

    }

    //Muestro el total de deducciones de todos los empleados
    cout << "Total deducciones de IHSS: " << vTotalIHSS << endl << endl;

    system("pause");
    return 0;
}