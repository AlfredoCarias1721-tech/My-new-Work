//PrimerCaracter.cpp este archivo contiene la funcion
//"main". La ejecucion del programa comienza y termina ahi.

#include <iostream>  // libreria que permite entrada y salida de caracteres
using namespace std;

int main() //cuerpo del programa
{
	char vletra;      //declaracion de variables de tipo char(caracter)
	
	//muestra en la pantalla el contenido entre comillas
	cout << "ingrese su nombre completo: ";
	vletra = cin.get(); //como se utiliza cin.get
	
	//mostrar en pantalla los resultados del programa
	cout << "su nombre comienza con la letra: " << vletra << endl <<endl;
	system("pause");
	return 0;  //finaliza el programa
}
