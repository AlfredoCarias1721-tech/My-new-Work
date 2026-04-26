Algoritmo CalDeducciones
	Definir vSalario, vIhss, vRap, vCooperativa Como Real
	Definir vDeducciones, vSueldoNeto Como Real
	
	Escribir "Ingrese el sueldo: "
	Leer vSalario
	
	Si vSalario <= 9326 Entonces
		vIhss = vSalario * 0.05
	FinSi
	
	vRap = vSalario * 0.015
	vCooperativa = vSalario * 0.05
	vDeducciones = vIhss + vRap + vCooperativa
	vSueldoNeto = vSalario - vDeducciones
	
	Escribir "IHSS: ", vIhss
	Escribir "RAP: ", vRap
	Escribir "Cooperativa: ", vCooperativa
	Escribir "Total deducciones: ", vDeducciones
	Escribir "Total a pagar: ", vSueldoNeto
FinAlgoritmo