// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    double precio_inicial;
    double precio_con_iva;
    double precio_final;
    system("cls");

    cout << "ingrese un numero: ";
    cin >> precio_inicial;
    precio_con_iva = precio_inicial * 0.13;
    precio_final = precio_inicial + precio_con_iva;
    cout << "el precio final con IVA es: " << precio_inicial + precio_con_iva << endl;

    return 0;
}
