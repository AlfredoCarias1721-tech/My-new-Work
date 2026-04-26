Algoritmo estrategia5_1
	
	definir nombre como caracter
	definir historial Como Caracter //b/m
	definir prestamo Como Real
	definir salario Como Real
	definir otraspropiedades Como Real
	
	escribir "Nombre: "
	leer nombre
	
	escribir "Historial (b/m): "
	leer historal
	
	escribir "Ingrese la cantidad: "
	leer prestamo
	
	escribir "Ingrese el salario anual: "
	leer salario

	escribir "Ingrese valor de otras propiedades: "
	leer otraspropiedades
	
	definir puntos como entero
	
	puntos = 0
	
	si salario >= 0.5 * prestamo Entonces
		puntos = puntos + 5
		
	sino
		si salario >= 0.25 * prestamo Entonces
			puntos = puntos + 3
		Sino
			si salario >= 0.10 * prestamo entonces 
				puntos = puntos + 1
			FinSi
		FinSi
	FinSi
	
	si otraspropiedades >= 2.0 * prestamo entonces
		puntos = puntos + 5
	sino 
		si otraspropiedades >= prestamo Entonces
			puntos = puntos + 3
		FinSi
	FinSi
	
	//mostrar resultado
	
	escribir ""
	escribir "Puntos Totales"
	
	
	
	
	
	
	
	
	
	
	
	
	
FinAlgoritmo
