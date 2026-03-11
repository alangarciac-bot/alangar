// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    int edad;
    char sexo;
    double altura;
    system("cls");
    cout << "ingrese edad: ";
    cin >> edad;

    cout << "ingrese el sexo: ";
    cin >> sexo;

    cout << "ingrese su altura: ";
    cin >> altura;

    cout << "la edad de alan es: " << edad << "_años." << endl;
    cout << "El sexo de alan es: " << sexo << endl;
    cout << "La altura de alan es: " << altura << "_metros" << endl;
    return 0;
}
