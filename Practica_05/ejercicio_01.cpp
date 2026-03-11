// Materia:Programacion l; Paralelo 4
// Autor: Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de Creacion: 11/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
float generar_precio();
float Calcular_iva(float total);
float Aplicando_descuento(float total);

int main()
{
    srand(time(0));
    float numero;
    float iva = 0.13;
    float sumatoria = 0;
    system("cls");

    cout << "ingrese la cantidad de productos" << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        float precio = generar_precio();
        sumatoria = sumatoria + precio;
        cout << "el precio " << i << ":" << precio << "bs" << endl;
    }
    cout << " el precio total es" << sumatoria << " bs " << endl;

    float iva_final = Calcular_iva(sumatoria);
    float monto_con_desceunto = Aplicando_descuento(sumatoria);

    cout << "el iva apagr es: " << iva_final << "bs" << endl;
    cout << "el monto final con descuento :" << monto_con_desceunto << "bs" << endl;
    return 0;
}
float generar_precio()
{
    return 20 + rand() % (50 - 20 + 1);
}
float Calcular_iva(float total)
{
    return total * 0.13;
}
float Aplicando_descuento(float total)
{
    if (total > 2500)
    {
        return total * 0.95;
    }
    return total;
}