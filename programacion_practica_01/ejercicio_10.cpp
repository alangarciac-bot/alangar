// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    int meses;

    cout << "ingrtese el numero de mes";
    cin >> meses;
    switch (meses)
    {

    case 1:
        cout << "enero";
        break;
    case 2:
        cout << "febrero";
        break;
    case 3:
        cout << "marzo";
        break;
    case 4:
        cout << "abril";
        break;
    case 5:
        cout << "mayo";
        break;
    case 6:
        cout << "junio";
        break;
    case 7:
        cout << "julio";
        break;
    case 8:
        cout << "agosto";
        break;
    case 9:
        cout << "septiembre";
        break;
    case 10:
        cout << "octubre";
        break;
    case 11:
        cout << "noviembre";
        break;
    case 12:
        cout << "diciembre";
        break;
    default:
        break;
    }
}