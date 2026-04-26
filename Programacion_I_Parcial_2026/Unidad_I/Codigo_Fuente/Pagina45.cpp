// Pago_Hora_Extra.cpp : Este archivo contiene la función 
// "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
	int vhorasTrabajadas;
	float vsueldo, vsueldohora_extra, vsuelhora;
	char nombre[70];

	//Solicitar el nombre completo del empleado
	cout << "\n Nombre del empleado: ";
	cin.getline(nombre, 70, '\n');

	// Solicitar el sueldo mensual y almacenarlo
	// en la variable vsueldo
	cout << "\n Sueldo: ";
	cin >> vsueldo;

	// Solicitar el número de horas trabajadas y almacenarlo
	// en la variable vhorasTrabajadas
	cout << "\n Horas trabajadas: ";
	cin >> vhorasTrabajadas;

	// Calcular el salario por hora
	vsuelhora = vsueldo / 30 / 8;

	// Calcular sueldo hora extras
	vsueldohora_extra = vsuelhora * 1.5 * vhorasTrabajadas;

	// Mostrar el total ganado en horas extras
	cout << nombre << " tiene ganado por horas extras: "
		<< vsueldohora_extra << endl << endl;

	system("pause");
	return 0;
}