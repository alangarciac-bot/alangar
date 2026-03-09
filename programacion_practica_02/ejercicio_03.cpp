// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma_total = 0;

    cout << "ingrese un numero para hacer la suma";
    cin >> n;
    system("cls");
    for (int i = 1; i <= n; i++)
    {
        suma_total = suma_total + i;
    }
    cout << "la suma de 1 hasta n es: " << suma_total << endl;
    return 0;
}