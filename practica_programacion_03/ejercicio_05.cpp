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

    cout << "di una cantidad de numeros primos que quieras intentar para ver si es primo o no ";
    cin >> n;

    int numero_total_De_primos = 0;

    for (int i = 1; i <= n; i++)
    {
        int numero = rand() % 1000 + 1;
        int divisores = 0;

        for (int j = 1; j <= numero; j++)
        {
            if (numero % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            cout << "El numero " << numero << " es primo" << endl;
            numero_total_De_primos++;
        }
        else
        {
            cout << "El numero " << numero << " no es primo" << endl;
        }
    }

    cout << "\nSe encontraron " << numero_total_De_primos << " numeros primos en total." << endl;

    return 0;
}
