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
    int numero_cara = 0;
    int numero_cruz = 0;
    double frecuencia_cara;
    double frecuencia_cruz;

    int resultado;
    srand(time(0));

    cout << "di la cantidad de veces que se lanzo la moneda ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        resultado = rand() % 2;
        if (resultado == 0)
        {
            numero_cara++;
        }
        else
        {
            numero_cruz++;
        }
    }
    frecuencia_cara = (double)numero_cara / n;
    frecuencia_cruz = (double)numero_cruz / n;

    cout << "los lanzamiento son: " << n << endl;
    cout << "el numero de caras son: " << numero_cara << endl;
    cout << "el numero de cruces son: " << numero_cruz << endl;
    cout << "la frecuencia de cara es  es: " << frecuencia_cara << frecuencia_cara * 100 << "%" << endl;
    cout << "la frecuencia de cruces es: " << frecuencia_cruz << frecuencia_cruz * 100 << "%" << endl;
    return 0;
}
