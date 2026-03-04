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
    srand(time(0));
    int n;

    cout << "di una cantidad de niños para hacer un calculo ";
    cin >> n;
    int niño_1_año = 0;
    int niños_2_año = 0;
    int niños_3_año = 0;

    for (int i = 1; i <= n; i++)
    {
        int numero = rand() % 3 + 1;

        if (numero == 1)
        {
            niño_1_año++;
        }
        if (numero == 2)
        {
            niños_2_año++;
        }
        if (numero == 3)
        {
            niños_3_año++;
        }
    }
    int pañales_totales = (niño_1_año * 6) + (niños_2_año) + (niños_3_año * 2);
    cout << "niños de 1 año: " << niño_1_año << " usan " << niño_1_año * 6 << " pañales" << endl;
    cout << "niños de 2 años: " << niños_2_año << " usan " << niños_2_año * 3 << " pañales" << endl;
    cout << "niños de 3 años: " << niños_3_año << " usan " << niños_3_año * 2 << " pañales" << endl;

    return 0;
}