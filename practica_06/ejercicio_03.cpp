// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 3
#include <iostream>

using namespace std;

void ModificarValores(int primero, int &segundo)
{
    primero = primero * 2;
    segundo = segundo + 10;
}

int main()
{
    int x = 5;
    int y = 20;

    cout << "--- Valores ANTES de la funcion ---" << endl;
    cout << "Variable x (pasada a 'primero'): " << x << endl;
    cout << "Variable y (pasada a 'segundo'): " << y << endl;

    ModificarValores(x, y);

    cout << "\n--- Valores DESPUES de la funcion ---" << endl;
    cout << "Variable x (no cambia): " << x << endl;
    cout << "Variable y (cambia a 30): " << y << endl;

    return 0;
}
