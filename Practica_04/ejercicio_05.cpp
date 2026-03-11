// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
bool Encontrar_Par(int numero);

int main()
{
    system("cls");
    int numero = 0;
    cout << "ingrese un numero: " << endl;
    cin >> numero;

    if (Encontrar_Par(numero))
    {
        cout << "el numero es par  " << endl;
    }
    else
    {
        cout << "es impar" << endl;
    }
}
bool Encontrar_Par(int numero)
{
    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
