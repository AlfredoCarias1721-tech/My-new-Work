// un programa que calcula el area del un rectangulo
#include <iostream>//usamos los terminos de esta biblioteca de c++
using namespace std;//ponemos lo que nos guardara de usar un prefijo "std;;" en todos los comandos

int main()//indicamos que en este algoritmo usaremos enteros
{
	double base, altura, area;//definimos las variables

	
	cout <<"Ingrese la base del rectangulo: ";//hacemos que este mensaje se muestre en pantalla
	cin >> base;//ponemos cin para que el programa nos  permita escribir los datos que queramos de nuestro teclado
	
	cout << "Ingrese la altura del recangulo: ";//ponemos otro mensaje que nos pida ingresar datos
	cin >> altura;//de nuevo usamos cin para permitirnos ingresar esos datos.
	
	area = base * altura;//dejamos en claro el resultado de la variable area
	
	cout <<"El area del rectangulo es: "<< area;//mostramos un mensaje que indica el resultado final asignando a ese mensaje la variable con el resultado
	
	return 0;//no se para que es esto pero es vital
}
