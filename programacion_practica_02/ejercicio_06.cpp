// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int numero_01;
    int numero_02;
    system("cls");

    cout << "ingrese el primer valor";
    cin >> numero_01;

    cout << "ingrese el segundo valor";
    cin >> numero_02;

    if (numero_01 == numero_02)
    {
        cout << " nose puede hcaer nada" << endl;
    }
    else if (numero_01 > numero_02)
    {
        cout << " la escala seria descendente";
        for (int i = numero_01; i >= numero_02; i--)

        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "seria ascendente";
        for (int i = numero_01; i <= numero_02; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
