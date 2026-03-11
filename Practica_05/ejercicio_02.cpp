// Materia:Programacion l; Paralelo 4
// Autor: Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de Creacion: 11/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
float Calcular_comision(float total_ventas);
float Calcular_sueldoFinal(float basico, float comision);
int main()
{
    srand(time(0));
    int numero = 0;
    float antiguedad = 0;
    float total = 0;
    float basico = 0;
    system("cls");

    cout << "ingrese el numero de vendedoras: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        cout << "ingrese el seuldo basico: ";
        cin >> basico;
        cout << "ingrese el monto total vendido: ";
        cin >> total;

        float comision = Calcular_comision(total);
        float Sueldo_final = Calcular_sueldoFinal(basico, comision);

        cout << "comision extra 10%: " << comision << "bs" << endl;
        cout << " sueldo final es: " << Sueldo_final << "bs" << endl;
    }

    return 0;
}
float Calcular_comision(float total_ventas)
{
    float comision = total_ventas * 0.10;
    return comision;
}
float Calcular_sueldoFinal(float basico, float comision)
{
    float sueldoFinal = basico + comision;
    return sueldoFinal;
}