Algoritmo VentaAntallones
    Definir cantidad, precio Como Real
    Definir TotalPagar Como Real
    
    precio = 900
    
    Escribir "Cantidad de pantalones: "
    Leer cantidad
    
    Si cantidad > 0 Y cantidad < 5 Entonces
        TotalPagar = cantidad * precio
    SiNo Si cantidad > 5 Y cantidad < 12 Entonces
			TotalPagar = cantidad * precio * 0.70
		SiNo Si cantidad >= 12 Entonces
				TotalPagar = cantidad * precio * 0.70
			SiNo
				Escribir "La cantidad no puede ser negativa"
			FinSi
			
		FinSi
    FinSi
    
    Escribir "Total a pagar: ", TotalPagar
FinAlgoritmo