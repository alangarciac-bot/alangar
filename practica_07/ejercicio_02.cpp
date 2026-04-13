// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{

    double voltios[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    int tamano = 9;

    cout << "Valores del arreglo voltios" << endl;

    for (int i = 0; i < tamano; i++)
    {
        cout << voltios[i] << "  ";

        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
