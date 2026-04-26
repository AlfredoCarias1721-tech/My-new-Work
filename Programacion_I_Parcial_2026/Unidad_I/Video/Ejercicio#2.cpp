//solucion#2
#include <iostream>//damos acceso a la libreria estandar para introdaucir datos de entrada y salida
using namespace std;//de nuevo esto para evtar usar el prefijo std
int main ()//abrimos el espacio donde estara el algoritmo
{//recordamos, todo el algoritmo entre llaves 
    int nota1, nota2, nota3;//como vamos a introducir numeros que normalmente no tienen decimal (20,30,40,1,2,3) usamos el asignador de variables de enteros
    double promedio;//como el promedio es algo que normalmente lleva decimales usamos double para que la variable guarde numeros precisos con decimales

    cout << "ingrese la nota numero 1: ";//mostramos texto en pantalla
    cin >> nota1;//cin tambien sirve para evitar que el programa se siga ejecutando hasta que el usuario introduzca un dato, en este caso debemos
                //introducir un numero entero para mayor precision
 cout << "ingrese la nota numero 2: ";//repetimos el mismo proceso hasta llegar a la nota 3
    cin >> nota2;
    
     cout << "ingrese la nota numero 3: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3)/3;//ahora le damos valor a la variable que no lo tiene que es la de promedio, su valor será
                                         // en este caso usamos la formula estandar del promedio
    cout << "el promedio final es: " << promedio;//mostramos un texto en pantalla que nos diga el resultado, el promedio final.
    
    return 0;//el programa salio bien asi que con este comando le decimos a la maquina que todo salio bien.
}
