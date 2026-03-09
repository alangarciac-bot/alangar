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
    int sumatoria = 0;
    int factorial = 1;
    system("cls");
    cout << "ingrese un numero factorial:";
    cin >> numero;
    if (numero > 0 && numero <= numero)
    {
        cout << numero << " es el numero factorial que se multiplicara:";
        for (int i = 1; i <= numero; i++)
        {
            factorial = factorial * i;
            sumatoria = factorial;
        }
        cout << " la sumatoria de los numeros es: " << sumatoria << endl;
        return 0;
    }
}
