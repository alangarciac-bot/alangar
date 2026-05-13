// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 12/05/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

int sumarVector(int arr[], int tamano)
{
    if (tamano <= 0)
    {
        return 0;
    }
    return arr[tamano - 1] + sumarVector(arr, tamano - 1);
}

int main()
{
    int miVector[] = {5, 10, 15, 20};
    int n = sizeof(miVector) / sizeof(miVector[0]);

    cout << "Resultado: " << sumarVector(miVector, n) << endl;

    return 0;
}
