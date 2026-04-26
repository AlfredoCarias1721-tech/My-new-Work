//Archivo: Pagina92a93y94.cpp
//Alumno: Jose Alfredo Carias 11vo-3 Informatica
//Fecha 3/04/2026
//Descripcion: Menú interactivo de ventas con 5 productos, cálculo de impuesto y total facturado

//UsoWHile2.cpp: Este archivo contiene la funcion "main". la ejecucion del programa comienza y termina ahi
//

#include<iostream>
#include <iomanip>
using namespace std;

int main ()
{
    //declaracion de variables
    string vOpcion;
    double vCompratTotal = 0, vImpTotal = 0, vTotalPagar = 0;

    //ejecutar el bucle mientras vOpcion sea distinto de N y n
    while (vOpcion != "N" && vOpcion != "n")
    {
        //Declarar variables
        int vCantidad = 0, vProducto = 0;
        double vImpuesto = 0, vTotal = 0, vTotalProducto = 0, vPrecio = 0;

        //Mostrar menu
        cout << "\n 1.- Camiseta -------------$.100.00 ";
        cout << "\n 2.- Chaqueta -------------$.200.00 ";
        cout << "\n 2.- Abrigo de Cuero ------$.150.00 ";
        cout << "\n 4.- Pantalon corto -------$.50.00 ";
        cout << "\n 5.- Jeans vaquero --------$.100.00 ";

        //Seleccionar el Producto
        cout << "\n\n Seleccione el producto: ";
        cin >> vProducto;

        //Realizar el calculo del total de acuerdo al producto seleccionado
        switch (vProducto)
        {
        case 1:
            vPrecio = 100;

            break;
        case 2:
             vPrecio = 200;
        
            break;

        case 3: 
             vPrecio = 150;

             break;

        case 4:
            vPrecio = 50;
            break;

        case 5:
             vPrecio = 100;
             break;
         default:
        cout << "\n Opci\xa2n seleccionada incorrecta \n\n";
        system("pause");
        system("cls");   
        continue;
    
        }
        //solicitar la cantidad
        cout << "\nIngrese la cantidad: ";
        cin >> vCantidad;

        //Calcular el total
        vTotal = vCantidad * vPrecio;

        //realizar el calculo del impuesto
        vImpuesto = vTotal * 15 / 100;

        //sumar el total mas el impuesto
        vTotalProducto = vTotal + vImpuesto;

        //acumular el subtotal, imppuesto y total a pagar
        vCompratTotal += vTotal;
        vImpTotal += vImpuesto;
        vTotalPagar += vTotalProducto;

        //total a pagar por el producto seleccionado
        cout << "\n Total a pagar por el producto seleccionado \n\n";
        cout << setw(15) << "total" << setw(15) << "impuesto" << setw(20) << "total a pagar \n";
        cout << setw(15) << vTotal << setw(15) << vImpuesto << setw(20) << vTotalProducto << "\n";
        cout << "-----------------------------------------------------------------------------------\n\n";

        cout << "Desea seleccionar otro producto: ";
        cin >> vOpcion;
        system("cls");
    }
    
     //Mostrar todos los totales acumulados
     cout << "Total facturado \n";
     //setw(15), indica que el subtotatal e impuesto se imprimira en un ancho de 15
     //espaciod, alineandose a la derecha y el resto de espacios vacios a si izquierda
     //de esta forma la informacion se muestra alineada como si de una tabla de se tratara
     cout << setw(15) << "SubTotal" << setw(15) << "Impuesto" << setw(20) << "Total factura \n ";
     cout << setw(15) << vCompratTotal << setw(15) << vImpTotal << setw(20) << vTotalPagar << "\n";

    
     system("pause");
    
    
     return 0;


}
