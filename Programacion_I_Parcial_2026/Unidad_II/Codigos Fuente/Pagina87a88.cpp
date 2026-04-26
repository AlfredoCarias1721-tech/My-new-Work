// Archivo: Pagina87a88.cpp
// Alumno: Jose Alfredo Carias Figueroa
// Fecha: 4/4/2026
// Descripcion: Solicita 10 numeros al usuario, acumula los primeros 5
//              y los segundos 5 por separado, y calcula la diferencia entre ambos grupos

// UsoFor3.cpp : Este archivo contiene la funcion "main", La ejecucion del programa comienza y termina ahi.
//

#include <iostream>
using namespace std;

int main()
{
    // todas como int porque el ejercicio solo maneja numeros enteros sin decimales
    // si quisieramos decimales bastaria con cambiar int a double
    // se inicializan en 0 para evitar valores basura de la memoria
    // el compilador NUNCA asigna 0 automaticamente, hay que hacerlo manualmente
    // vNum no es acumulador, proporciona el numero recien ingresado y se vacia consecutivamente
    int vContador = 1, vSumaP5 = 0, vSumaS5 = 0, vDiferencia = 0, vNum = 0;

    // el for sin inicializacion porque vContador ya fue declarado arriba
    // vContador += 1 hace exactamente lo mismo que vContador++
    // el libro usa += para mostrar que existe esa forma de incrementar
    for (; vContador <= 10; vContador += 1)
    {
        /*Instrucciones que se ejecutaran mientras vContador
        sea menor o igual a 10*/

        // solicitar el numero al usuario
        // \xa3 es un codigo hexadecimal para mostrar la tilde en u
        cout << "Ingrese un n\xa3mero: ";
        cin >> vNum;

        // el for es el dueño del bucle, el if es el condicionante
        // cumple la condicion para que solo sumen los primeros cinco numeros
        // si el contador es menor o igual a 5, acumula en la primera caja
        if (vContador <= 5)
        {
            // nuevo valor de la caja = lo que ya tenia + el numero recien ingresado
            vSumaP5 = vSumaP5 + vNum;
        }

        // segundo if independiente, no es else porque cada condicion evalua por separado
        // && significa Y ADEMAS, ambas condiciones deben cumplirse al mismo tiempo
        // si el contador ya paso 5, acumula en la segunda caja
        if (vContador > 5 && vContador <= 10)
        {
            // mismo principio que el acumulador anterior pero para los segundos 5
            vSumaS5 = vSumaS5 + vNum;
        }

    } // fin del for 

    /* el calculo va fuera del for porque necesita los totales completos
    de los 10 numeros*/
    vDiferencia = vSumaP5 - vSumaS5; // si vSumaS5 es mayor, el resultado sera negativo

    // se muestran las cajas llenas con los totales acumulados
    cout << "\n Los primeros cinco n\xa3meros suman: "  << vSumaP5     << endl << endl;
    cout << "\n Los segundos cinco n\xa3meros suman: "  << vSumaS5     << endl << endl;
    cout << "\n La diferencia entre los primeros y segundos cinco n\xa3meros es: "
         << vDiferencia << endl << endl;

    system("pause"); // pausa para que la consola no se cierre de golpe
    return 0;        // cierre formal del programa
}