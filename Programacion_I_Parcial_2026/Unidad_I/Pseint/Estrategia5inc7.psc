Algoritmo estrategia5_7
	
	definir promedio Como Real
	
	Escribir  "Ingrese el promedio: "
	leer promedio
	
	si promedio < 0 o promedio > 100 entonces
		
		escribir "Error al ingresar el promedio"
	Sino
		
		si promedio <= 35 Entonces
			escribir "Promedio Insuficiente"
		Sino
			si promedio <70 Entonces
				escribir "Reprobado"
			Sino
				escribir "Aprobado"
			finsi //cerramos el tercer si
		finsi //cierra el segundo si
	fin si //cerrar el primer si
FinAlgoritmo
