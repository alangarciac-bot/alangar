// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha creación: 03/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int numero = rand() % 10 + 1;
    int factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    cout << "El numero aleatorio es: " << numero << endl;
    cout << "Su factorial es: " << factorial << endl;

    return 0;
}
