//switch_1.cpp: estea archivo contine la funcion main, la ejecucion delprograma comienza y termina ahi

#include <iostream>
using namespace std;

int main ()
{
    //declaracion de variables
    float vnum1, vnum2;
    int vopcion;
    float vresul;

    cout << "Ingrese dos n\xa3meros: " << endl << "\t";
    cin >> vnum1;
    cout << "\t";
    cin >> vnum2;
    cout << "\n Operaciones Matem\xa0ticas";
    cout << "\n 1.- Suma";
    cout << "\n 2.- Resta";
    cout << "\n 3.- Multiplicaci\xa2n:";
    cout << "\n 4.- Divisi\xa2n";
    cout << "\n Elija su opci\xa2n: ";
    cin >> vopcion;

    //tomar el valor ingresado
    switch (vopcion)
    {
    case 1: // en caso que opcion sea 1
     vresul = vnum1 + vnum2; 
     cout << "\n La suma es: " << vresul << endl;
        
        break; //salir de switch

    case 2: // en caso e que opcion sea 2
     vresul = vnum1 - vnum2;
     cout << "\n La resta es: " << vresul << endl;
     break; //salir del switch
    
    case 3:
     vresul = vnum1 * vnum2; // realizar la multiplicacion
     //mostrar la multiplicacion
     cout << "\n La multiplicaci\xa2n es: " << vresul << endl;
     break; // salir del switch
    
    case 4:
     //si vnum2 es distinto de 0 entonces
     if (vnum2 != 0)
     {
        //realizar la division
        vresul = vnum1 / vnum2;
        //mostrar la division
        cout << "\n La divisi\xa2n es: " << vresul << endl;
     }
     else//sino
     {
         //mostrar division por cero no es valida
         cout << "\n La divisi\xa2n por cero no es v\xa0lida" << endl;
     }
     break; //salir del switch
    default: // en caso que ninguna opcion se cumpla
        //mostrar opcion seleccionada incorrecta
        cout << "\n Opci\xa2n seleccionadda incorrecta" << endl;
        break;
    }
    system("pause");
    return 0;
}