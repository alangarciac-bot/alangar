// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 12/05/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int Q(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n * n) + Q(n - 1);
}

int main()
{
    cout << "Resultado: " << Q(3) << endl;
    return 0;
}
