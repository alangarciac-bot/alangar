// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 1
#include <iostream>

using namespace std;

void IntercambiarValores(int &a, int &b)
{
    int temporal = a;
    a = b;
    b = temporal;
}

int main()
{
    int x = 10;
    int y = 25;

    cout << "--- Antes del intercambio ---" << endl;
    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;

    IntercambiarValores(x, y);

    cout << "\n--- Despues del intercambio ---" << endl;
    cout << "Valor de x: " << x << " (ahora tiene el valor de y)" << endl;
    cout << "Valor de y: " << y << " (ahora tiene el valor de x)" << endl;

    return 0;
}
