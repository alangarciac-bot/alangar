// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 12/05/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int sumaDigitos(int n)
{
    if (n < 10)
    {
        return n;
    }
    return (n % 10) + sumaDigitos(n / 10);
}

int main()
{
    int numero = 1234;
    cout << "Resultado: " << sumaDigitos(numero) << endl;
    return 0;
}
