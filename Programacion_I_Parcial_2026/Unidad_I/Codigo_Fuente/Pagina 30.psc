Algoritmo Pago_Hora_Extra
    Definir vSueldo, vSuelHora, vSueldoHora_Extra Como Real
    Definir vHorasTrabajadas Como Entero
    
    // Solicitar el sueldo mensual y almacenarlo
    Escribir "Sueldo:"
    Leer vSueldo
    
    // Solicitar el número de horas trabajadas y almacenarlo
    Escribir "Horas trabajadas:"
    Leer vHorasTrabajadas
    
    // Calcular el salario por hora
    vSuelHora <- vSueldo / 30 / 8
    
    // Calcular sueldo hora extras
    vSueldoHora_Extra <- vSuelHora * 1.5 * vHorasTrabajadas
    
    // Mostrar el total ganado en horas extras
    Escribir " Sueldo por horas extras: ", vSueldoHora_Extra
	FinAlgoritmo