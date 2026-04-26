Algoritmo pagina56
	
	definir promedio Como Entero 
	Escribir "Ingrese el promedio" 
	Leer promedio
	Si promedio >= 0 y promedio <= 100 Entonces
		Si promedio <= 35 Entonces
			Escribir "promedio insuficiente"
		SiNo
			Si promedio < 70 Entonces
				Escribir "reprobado"
			SiNo
				Escribir "aprobado"
			Fin Si
		Fin Si
	SiNo
		Escribir "error al ingresar promedio"
	Fin Si
	
	
	
	
FinAlgoritmo
