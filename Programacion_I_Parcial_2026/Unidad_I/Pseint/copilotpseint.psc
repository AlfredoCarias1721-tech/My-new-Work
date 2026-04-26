Algoritmo sin_titulo
	
		
		// Declarar variables
		Definir nombre Como Caracter
		Definir historial Como Caracter
		Definir prestamo Como Real
		Definir salario Como Real
		Definir otrasPropiedades Como Real
		Definir puntos Como Entero
		
		// Entrada de datos
		Escribir "Nombre: "
		Leer nombre
		
		Escribir "Historia crediticia (b/m): "
		Leer historial
		
		Escribir "Cantidad del prestamo: "
		Leer prestamo
		
		Escribir "Salario anual: "
		Leer salario
		
		Escribir "Valor de otras propiedades: "
		Leer otrasPropiedades
		
		// Inicializar puntos
		puntos <- 0
		
		// Puntos por salario
		Si salario >= 0.5 * prestamo Entonces
			puntos = puntos + 5
		Sino
			Si salario >= 0.25 * prestamo Entonces
				puntos = puntos + 3
			Sino
				Si salario >= 0.10 * prestamo Entonces
					puntos = puntos + 1
				FinSi
			FinSi
		FinSi
		
		// Puntos por otras propiedades
		Si otrasPropiedades >= 2.0 * prestamo Entonces
			puntos = puntos + 5
		Sino
			Si otrasPropiedades >= prestamo Entonces
				puntos = puntos + 3
			FinSi
		FinSi
		
		// Mostrar resultado
		Escribir ""
		Escribir "Puntos totales: ", puntos
		
		Si (historial = 'b' O historial = 'B') Y puntos > 6 Entonces
			Escribir "Solicitud aceptada."
		Sino
			Escribir "Solicitud rechazada."
		FinSi
		

FinAlgoritmo
