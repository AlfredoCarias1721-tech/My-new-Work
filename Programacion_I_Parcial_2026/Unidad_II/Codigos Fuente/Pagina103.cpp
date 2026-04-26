//Archivo: Pagina103.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Declaración, inicialización y recorrido de una matriz de 2x4

//Arreglo3.cpp este achivo contiene la funcion "main", la ejecucion del programa comienza y termina ahi.

#include <iostream>
using namespace std;
int main ()
{
    //declarar e inicializar matriz
    int arreglo[2][4] = { { 10, 50, 60, 70 },{ 20, 75, 65, 25 } };

    //obtener el numero de filas y numero de columnas
    int filas = (sizeof(arreglo) / sizeof(arreglo[0]));
    int columnas = (sizeof(arreglo[0]) / sizeof(arreglo[0][0]));

    //recorrer las filas
    for (int i = 0; i < filas; i++)
    {
        /*Si estamos enl a fila 2 del arreglo 
        realizar un salto de linea */
        if (i == 1)
        {
            cout << endl;
        }

        //recorrer las columnas
        for (int j = 0; j < columnas; j++)
        {
            cout << arreglo[i][j] << endl;
        }
    }

    system ("pause");
    return 0;
    
}