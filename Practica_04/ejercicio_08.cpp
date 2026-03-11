// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
int calcular_digitos(int numero);
int main()
{
    system("cls");
    int numero = 0;

    cout << "ingrese el numero:" << endl;
    cin >> numero;

    int sumatoria = calcular_digitos(numero);
    cout << "el numero tiene " << sumatoria << " digitos " << endl;
    return 0;
}
int calcular_digitos(int numero)
{
    int digitos = 0;
    if (numero == 0)
    {
        return 1;
    }
    if (numero < 0)
    {
        numero * -1;
    }
    while (numero > 0)
    {
        numero = numero / 10;
        digitos++;
    }
    return digitos;
}