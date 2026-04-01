// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <cmath>

using namespace std;

double CalcularVolumen(double radio, double altura = 10)
{
    const double PI = 3.14159265;
    return PI * pow(radio, 2) * altura;
}

int main()
{
    double r;

    cout << "Introduce el radio del cilindro: ";
    cin >> r;

    cout << "Volumen con altura por defecto (10): " << CalcularVolumen(r) << endl;

    cout << "Volumen con altura personalizada (5): " << CalcularVolumen(r, 5) << endl;

    return 0;
}
