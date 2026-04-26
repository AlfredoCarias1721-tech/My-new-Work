Algoritmo SalarioHora
    Definir vNom Como CARACTER
    Definir vSueldo, vSuelHora Como Real
    
    // Solicitar el nombre del empleado y almacenarlo
    Escribir "Empleado:"
    Leer vNom
    
    // Solicitar el sueldo del empleado y almacenarlo
    Escribir "Sueldo:"
    Leer vSueldo
    
    // Calcular el salario por hora
    vSuelHora <- vSueldo / 30 / 8
    
    // Mostrar el nombre del empleado y sueldo hora
    Escribir vNom, " tiene un sueldo hora de: ", vSuelHora
FinAlgoritmo
	