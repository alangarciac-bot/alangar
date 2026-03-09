// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double precio = 0;
    double suma_total_ventas = 0;
    double total_iva_acumulado = 0;
    double monto_final = 0;
    double descuento = 0;
    double iva_del_producto;
    double precio_con_iva;

    system("cls");
    cout << "ingrese el el producto:" << endl;

    do
    {
        cout << "Ingrese el precio del producto haga 0 para finalizar: ";
        cin >> precio;

        if (precio > 0)
        {
            iva_del_producto = precio * 0.13;
            total_iva_acumulado = total_iva_acumulado + iva_del_producto;
            precio_con_iva = precio + iva_del_producto;
            suma_total_ventas = suma_total_ventas + precio_con_iva;
        }

    } while (precio != 0);

    monto_final = suma_total_ventas;

    if (suma_total_ventas > 2500)
    {
        descuento = suma_total_ventas * 0.05;
        monto_final = suma_total_ventas - descuento;
        cout << "el descuento que se aplico por ser mas de 2500 es: " << descuento << " Bs." << endl;
    }
    cout << "Total ventas realizadas con el precio con IVA: " << suma_total_ventas << " Bs." << endl;
    cout << "se debe cobrar al cliente:  " << monto_final << " Bs." << endl;
    cout << "IVA total a pagar a Impuestos (13%) : " << total_iva_acumulado << " Bs." << endl;

    return 0;
}
