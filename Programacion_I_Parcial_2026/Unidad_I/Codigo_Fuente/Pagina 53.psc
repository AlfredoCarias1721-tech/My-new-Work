Algoritmo calcIHSS
    Definir vSalario, vIhss Como Real
    Escribir "Ingrese el salario: "
    Leer vSalario
    
    Si vSalario <= 9326 Entonces
        vIhss = vSalario * 0.05
    SiNo
        vIhss = 9326 * 0.05
    FinSi
    
    Escribir "IHSS: ", vIhss
FinAlgoritmo