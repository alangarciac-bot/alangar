// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int sumatoria = 0;

    system("cls");
    cout << "Alan ingrese un numero que cree que es perfecto: ";
    cin >> numero;

    if (numero > 0)
    {

        for (int i = 1; i < numero; i++)
        {
            if (numero % i == 0)
            {
                sumatoria = sumatoria + i;
                cout << i << " es el que puede dividir " << endl;
            }
        }

        if (sumatoria == numero)
        {
            cout << numero << "Es un numero perfecto" << endl;
            cout << "Porque la suma de sus divisores es: " << sumatoria << endl;
        }
        else
        {
            cout << "\nNo es perfecto." << endl;
            cout << "La suma dio " << sumatoria << " y no es igual a " << numero << endl;
        }
    }
    else
    {
        cout << "Por favor ingrese un numero positivo." << endl;
    }

    return 0;
}
