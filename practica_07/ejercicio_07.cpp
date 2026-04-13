// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 7
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> numeros;
    int entrada;

    cout << "Ingresa hasta 10 numeros enteros (o un numero negativo para terminar):" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> entrada;

        if (entrada < 0)
        {
        }

        numeros.push_back(entrada);
    }

    cout << "\n--- Elementos en el vector ---" << endl;
    if (numeros.empty())
    {
        cout << "No se introdujeron numeros validos." << endl;
    }
    else
    {
        for (int i = 0; i < numeros.size(); i++)
        {
            cout << numeros[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
