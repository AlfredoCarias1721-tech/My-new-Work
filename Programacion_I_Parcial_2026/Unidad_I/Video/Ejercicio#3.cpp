//solucion #3
#include <iostream> //introducimos la biblioteca de comandos de enrada y salida
#include <cmath> //esta nueva libreria nos permitira usar comandos que representan algunas informaciones de las formulas matematicas
using namespace std;//comando para evitar usar el prefijo std
int main()//abrimos el comando
{

    double radio, volumen;//asignamos variables que almacenen tipos de datos enteros, sin decimales
    const double pi = 3.14159;//como esta formula requiere un valor que no cambia, que es el de PI, asignamos el valor de pi como un valor constante
    
    cout <<"ingrese el radio: ";//mostramos texto en pantalla que pida los datos requeridos
    cin  >> radio;//comando para introducir datos y almacenarlos en una variable

    volumen = (4 * pi * pow(radio,3))/3;//le asignamos un valor a la variable que queremos saber su valor, la del volumen, el comando pow es de 
                                        //la libreria cmath, es como decir el radio elevado al cubo.
    cout << "el volumen es: " << volumen;//un mensaje que introduzca el resultadoo final!! y ya esta.


    return 0;//le decimos a la maquina que todo salio bien.
    
}//estos serian los 3 ejercicios explicados a mi manera.


