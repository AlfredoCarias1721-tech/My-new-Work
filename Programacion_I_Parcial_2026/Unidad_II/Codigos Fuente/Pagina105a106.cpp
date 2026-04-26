// Arreglo4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declarar matriz
    int vSueldos[10][2];

    //Declarar variable para recoger el sueldo
    int vSueltoTal = 0;

    //Obtener el número de filas y número de columnas
    int filas = (sizeof(vSueldos) / sizeof(vSueldos[0]));
    int columnas = (sizeof(vSueldos[0]) / sizeof(vSueldos[0][0]));

    //Recorrer las filas
    for (int i = 0; i < filas; i++)
    {
        int vContColum = 1; //Variable para controlar columnas
        //Recorrer las columnas
        for (int j = 0; j < columnas; j++)
        {
            if (vContColum == 1)
            {
                // (\242) se utiliza para imprimir la o con tilde.
                cout << setw(15) << "C\242digo: ";
                cin >> vSueldos[i][j];
            }
            else
            {
                //Solicitar el sueldo
                cout << setw(15) << "Sueldo: ";
                cin >> vSueldos[i][j];
            }
            vContColum += 1;
        }
    }

    // Recorrer cada fila para la columna 2 y sumarla, fil++ incrementa fil en 1 en
    // cada iteración, siempre y cuando fil sea menor que filas
    for (int fil = 0; fil < filas; fil++)
    {
        //Bucle del ciclo for
        // vSueltotal acumula su valor más el valor de la posición en la matriz
        // (1,1), (2,1), (3,1)...
        vSueltoTal += vSueldos[fil][1];
    }

    cout << setw(15) << "Total sueldos: " << vSueltoTal;
    cout << endl << endl;

    system("pause");
    return 0;
}