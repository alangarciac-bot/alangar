// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;

int main()
{
    int numeros;

    cout << "Ingrese un número entre 1 y 3999: ";
    cin >> numeros;

    string romano = "";

    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
    {
        while (numeros >= valores[i])
        {
            numeros -= valores[i];
            romano += simbolos[i];
        }
    }

    cout << "El número en romano es: " << romano << endl;

    return 0;
}
