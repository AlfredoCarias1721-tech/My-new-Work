Algoritmo pagina84
	Definir vSalarioHora, vHTrabajadas, vHorasNormales Como Real
	definir vHorasExtras, vSHorasNormales, vSHorasExtras, vTotalSueldo como real
	
	//declarar acumuladores
	Definir vtShorasNormales, vtShorasExtras, vtSalarioEmpleados Como Real
	
	//definir contador
	Definir vContador Como Entero
	vSalarioHora = 100
	
	//recorrer contador de 1 a 20
	para vContador = 1 hasta 10 con paso 1 Hacer
		escribir "Horas trabajadas del empleado ", vContador, ": "
		leer vHTrabajadas
		
		//calcular las horas normales y horas extras 
		si vHTrabajadas <= 40 Entonces
			vHorasNormales = vHTrabajadas
			vHorasExtras = 0
			sino
				vHorasNormales = 40
				vHorasExtras = vHTrabajadas - 40
			fin si
				//calculo del salario horas extras, normales y total a pagar
				vSHorasNormales = vHorasNormales * 100
				vSHorasExtras = vHorasExtras * 100 * 1.25
				vTotalSueldo = vSHorasNormales + vSHorasExtras
				
				//acumular el salario horas extras, normales y total a pagar
				vtShorasNormales = vtShorasNormales + vSHorasNormales
				vtShorasExtras = vtShorasExtras + vSHorasExtras
				vtSalarioEmpleados = vtSalarioEmpleados + vTotalSueldo
			FinPara
			
				
				escribir "Total salario horas normales: ", vtShorasNormales
				Escribir "Total salario horas extras: ", vtSHorasExtras
				escribir "Total salario a pagar: ", vtSalarioEmpleados
				
		
	
	
FinAlgoritmo
