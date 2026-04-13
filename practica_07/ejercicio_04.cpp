// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 4
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese la dimension N de los vectores: ";
    cin >> n;

    vector<double> vectorA(n);
    vector<double> vectorB(n);
    vector<double> vectorResultado(n);

    cout << "\n--- Datos del Vector A ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> vectorA[i];
    }

    cout << "\n--- Datos del Vector B ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "B[" << i << "]: ";
        cin >> vectorB[i];
    }

    for (int i = 0; i < n; i++)
    {
        vectorResultado[i] = vectorA[i] * vectorB[i];
    }

    cout << "\n--- Vector Resultado (A * B) ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Resultado[" << i << "]: " << vectorResultado[i] << endl;
    }

    return 0;
}
