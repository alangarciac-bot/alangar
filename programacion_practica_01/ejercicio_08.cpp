// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    int num4;

    cout << "ingrese el primer numero ";
    cin >> num1;
    cout << "ingrese el segundo numero ";
    cin >> num2;
    cout << "ingrese el tercer numero ";
    cin >> num3;
    cout << "ingrese el cuarto numero ";
    cin >> num4;
    if (num4 == num1 || num4 == num2 || num4 == num3)
    {
        cout << "el cuarto numero: " << num4 << " concide con uno de los 3 numeros" << endl;
    }
    else
    {
        cout << " el cuarto numero:" << num4 << "no concide con ni uno de los numeros:" << endl;
    }
    return 0;
}