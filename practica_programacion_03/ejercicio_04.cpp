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
    int numero;
    int total = 0;
    int promedio = 0;
    int mayor = 0;
    int menor = 1001;
    srand(time(0));
    cout << "numero que se genera" << endl;
    int suma_total = 1;
    for (int i = 1; i <= numero; i++)

    {
        int numero = rand() % 1000 + 1;
        cout << "el numero que se esta dando es : " << numero << endl;

        suma_total = suma_total + i;

        if (numero > mayor)
        {
            mayor = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
        promedio = suma_total / numero;
    }
    cout << " la suma es " << suma_total << endl;
    cout << " el promedio es " << promedio << endl;
    cout << " el numero mayor es: " << mayor << endl;
    cout << " el numero menor es: " << menor << endl;
    return 0;
}