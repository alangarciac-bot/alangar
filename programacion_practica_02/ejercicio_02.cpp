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
    int suma_total = 0;
    int sumas_pares = 0;
    int sumas_impares = 0;
    int sumas_primos = 0;
    bool primo;

    system("cls");
    do
    {
        cout << "ingrese un numero: ";
        cin >> numero;

        if (numero % 2 == 0)

        {
            sumas_pares = sumas_pares + numero;
        }
        else
        {
            sumas_impares = sumas_impares + numero;
        }

        bool primo = true;
        if (numero <= 1)
        {
            primo = false;
        }
        else
        {
            for (int i = 2; i * i <= numero; i++)
            {
                if (numero % i == 0)
                {
                    primo = false;
                    break;
                }
            }
        }
        if (primo)
        {
            sumas_primos = sumas_primos + numero;
        }
        if (numero > 0 && numero <= 100)
        {
            suma_total = sumas_pares + sumas_impares + sumas_primos;
        }
    } while (numero != 0);

    cout << "la suma total de los numeros pares es " << sumas_pares << endl;
    cout << " la suma total de impares es: " << sumas_impares << endl;
    cout << " la suma total de primos es: " << sumas_primos << endl;
    cout << " la suma total es: " << suma_total << endl;

    return 0;
}