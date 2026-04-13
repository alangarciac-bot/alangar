// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese la dimension N para los vectores: ";
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);
    vector<int> vectorCombinado;

    cout << "\n--- Datos del Vector 1 ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> vector1[i];
    }

    cout << "\n--- Datos del Vector 2 ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++)
    {
        vectorCombinado.push_back(vector1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        vectorCombinado.push_back(vector2[i]);
    }

    cout << "\n--- Vector Combinado (Total: " << vectorCombinado.size() << " elementos) ---" << endl;
    for (int i = 0; i < vectorCombinado.size(); i++)
    {
        cout << vectorCombinado[i] << " ";
    }
    cout << endl;

    return 0;
}
