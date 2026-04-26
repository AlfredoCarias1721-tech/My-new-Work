Algoritmo pagina81
	//Declarar variables
	Definir vSalario, vIHSS, vTotalIHSS Como Real 
	Definir vContador como entero
	
	//Recorrer vContador de 1 a 20
	Para vContador = 1 Hasta 20 Con Paso 1 Hacer
		Escribir "Salario del empleado: "
		Leer vSalario
		
		//Realizar el cálculo del IHSS
		Si vSalario <= 9326 Entonces
			vIHSS = vSalario * 0.05
		Sino
			vIHSS = 9326 * 0.05
		Fin Si
		
		//Acumular el IHSS en la variable vTotalIHSS
		vTotalIHSS = vTotalIHSS + vIHSS
		
	
	FinPara
	//Mostrar la suma del IHSS de todos los empleados 
	Escribir "Total de deducciones de IHSS: ", vTotalIHSS
	
	


	
FinAlgoritmo
