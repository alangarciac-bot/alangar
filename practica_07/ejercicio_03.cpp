// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath> // Para usar pow() en el cálculo de la varianza

using namespace std;

int main()
{
    int n;
    double suma = 0, promedio, varianza = 0, sumaCuadrados = 0;

    cout << "Ingrese la cantidad de calificaciones (N): ";
    cin >> n;

    vector<int> calificaciones(n);
    vector<double> desviacion(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    promedio = suma / n;

    for (int i = 0; i < n; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
        sumaCuadrados += pow(desviacion[i], 2);
    }

    varianza = sumaCuadrados / n;

    cout << "Resultado" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;

    cout << "\nCalificacion | Desviacion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << calificaciones[i] << "            | " << desviacion[i] << endl;
    }

    return 0;
}
