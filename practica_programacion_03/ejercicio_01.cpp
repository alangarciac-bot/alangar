// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha creación: 03/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n = 0;
    int numeros_pares = 0;
    double frecuencia;
    int resultado;
    srand(time(0));

    cout << "ingrese el numero para calcular ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        resultado = rand() % 6 + 1;
        if (resultado % 2 == 0)
        {
            numeros_pares++;
        }
    }
    frecuencia = (double)numeros_pares / n;

    cout << "los lanzamiento son: " << n << endl;
    cout << "el numero de caras pares son: " << numeros_pares << endl;
    cout << "la frecuencia es: " << frecuencia << frecuencia * 100 << "%" << endl;
    return 0;
}
