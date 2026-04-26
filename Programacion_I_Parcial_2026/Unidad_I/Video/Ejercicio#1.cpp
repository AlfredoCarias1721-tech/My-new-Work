//solucion
#include <iostream>//con este comando logramos permitirnos acceder a los comandos de la libreria iostream, entrada y salida
using namespace std;//esto es solo para evitar usar un prefijo std en comandos comunes como cout y cin
int main ()//iniciamos con la apertura del programa y todo el programa debe estar entre las llaves
{
    double base, altura, area;//como vamos a trabajar con un programa relacionado a una formula matematica usamos double para que 
                              // las variables puedan almacenar informacion numerica mas precisa, osea los decimales. con una pre
                              //cision de hasta 15 o mas
                            
    cout << "ingrese la base del triangulo: ";//usamos cout para transmitir texto en pantalla, en este caso le estamos pidiendo al mensaje
                                              //entre comillas que se transmita en la pantalla
    cin >> base; //como asignamos variables, este comando cin nos permite introducir datos desde nuestro teclado y almacenarlo en la variable base

    cout << "ingrese la altura del triangulo: ";//repetimos el mismo proceso con el otro requerimiento de la formula area=base x altura
    cin >> altura;

    area = (base * altura)/2;//le indicamos a la maquina que hacer con estas variables, lo que haran es darle un valor a la variable que no lo tiene
                             //y que depende de los datos que les introduzcamos para darnos el resultado

    cout << "el area del triagulo es: " << area;//usamos esta linea para que el resultado final almacenado en la variable area se muestre en pantalla
                                                //acompañado de un mensaje para el lector

    return 0;//como el programa esta bien le decimos a la computadora que el algoritmo salio bien 


}
