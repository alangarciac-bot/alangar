// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 0.13)
{
    double precioFinal = precioBase * (1 + impuesto);
    return precioFinal;
}

int main()
{
    double miPrecio = 100.0;

    cout << " Calculo de Precios (IVA Boliviano) " << endl;

    cout << "Precio base: " << miPrecio << " Bs." << endl;
    cout << "Total con IVA automatico (13%): " << CalcularPrecioTotal(miPrecio) << " Bs." << endl;

    cout << "\nTotal con impuesto personalizado (5%): " << CalcularPrecioTotal(miPrecio, 0.05) << " Bs." << endl;

    return 0;
}
