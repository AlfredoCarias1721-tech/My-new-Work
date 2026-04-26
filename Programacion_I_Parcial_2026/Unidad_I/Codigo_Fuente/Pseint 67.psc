Algoritmo Operaciones
    Definir vNum1, vNum2, vResult Como Real
    Definir vOpcion Como Entero
    
    Escribir "Ingrese dos números: "
    Leer vNum1
    Leer vNum2
    
    Escribir "Operaciones Matemáticas"
    Escribir "1 - Suma"
    Escribir "2 - Resta"
    Escribir "3 - Multiplicación"
    Escribir "4 - División"
    Escribir "Elija su opción"
    Leer vOpcion
    
    Según vOpcion Hacer
        1:
            vResult = vNum1 + vNum2
            Escribir "La suma es: ", vResult
        2:
            vResult = vNum1 - vNum2
            Escribir "La resta es: ", vResult
        3:
            vResult = vNum1 * vNum2
            Escribir "La multiplicación es: ", vResult
        4:
            Si vNum2 <> 0 Entonces
                vResult = vNum1 / vNum2
                Escribir "La división es: ", vResult
            SiNo
                Escribir "La división por cero no es válida"
            FinSi
        De Otro Modo:
            Escribir "Opción seleccionada incorrecta"
    FinSegún
	
FinAlgoritmo
