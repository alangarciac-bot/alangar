// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int numero;
    int secreto;
    int intentos = 0;
    srand(time(0));
    secreto = rand() % 100 + 1;
    system("cls");
    cout << "se penso en un numero alan trata de adivinarlo: " << endl;
    do
    {
        cout << " ingresa un numero alan: ";
        cin >> numero;
        intentos++;
        if (numero > secreto)
        {
            cout << "el numero que pensasate no es el correcto, es menor" << endl;
        }
        else
        {
            cout << " el numero que pensaste no es correcto, es mayor" << endl;
        }

    } while (numero != secreto);
    cout << " el numero: " << numero << " es el que estaba pensando" << endl;
    cout << "lo descubriste en:" << intentos << " intentos alan:" << endl;

    return 0;
}
