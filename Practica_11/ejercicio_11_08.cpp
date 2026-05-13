// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 12/05/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

void ullman(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        ullman(n / 2);
    }
    else
    {
        ullman(3 * n + 1);
    }
}

int main()
{
    ullman(26);
    cout << endl;
    return 0;
}
