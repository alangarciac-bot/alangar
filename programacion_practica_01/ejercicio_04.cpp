// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    double nota_de_practica, nota_teorica, nota_adicional;
    system("cls");
    cout << "ingrese la primer nota: ";
    cin >> nota_de_practica;
    cout << "ingrese la segunda nota: ";
    cin >> nota_teorica;
    cout << "ingrese la nota restante: ";
    cin >> nota_adicional;

    nota_de_practica = nota_de_practica * 0.60;
    nota_teorica = nota_teorica * 0.30;
    nota_adicional = nota_adicional * 0.10;

    cout << " la nota total es: " << nota_de_practica + nota_teorica + nota_adicional << endl;
    return 0;
}