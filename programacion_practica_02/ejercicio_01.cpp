// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "ingrese un numero para multiplicarlo: ";
    cin >> numero;

    if (numero >= 1 && numero <= 10)
    {
        cout << numero << " sera el numero que se multiplicara";

        for (int i = 1; i <= 10; i++)
        {
            cout << numero << "x" << i << "=" << (numero * i) << endl;
        }
    }
    else
    {

        cout << "el numero " << numero << " no cumple las condiciones que se pidio" << endl;
    }
    return 0;
}
