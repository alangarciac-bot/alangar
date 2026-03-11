  // Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    system("cls");

    cout << "ingrese el numero: ";
    cin >> numero;

    if (numero >= 18 && numero <= 25)
    {
        cout << " el numero :" << numero << " esta en el rango " << endl;
    }
    else
    {
        cout << "el numero:" << numero << " no esta en el rango de 18-25" << endl;
    }
}