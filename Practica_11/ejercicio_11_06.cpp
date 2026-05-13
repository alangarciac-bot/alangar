// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 12/05/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

bool sonIguales(int v1[], int v2[], int tamano)
{
    if (tamano == 0)
    {
        return true;
    }
    if (v1[tamano - 1] != v2[tamano - 1])
    {
        return false;
    }
    return sonIguales(v1, v2, tamano - 1);
}

int main()
{
    int v1[4] = {1, 2, 3, 4};
    int v2[4] = {1, 2, 3, 4};

    cout << "Resultado: " << sonIguales(v1, v2, 4) << endl;

    return 0;
}
