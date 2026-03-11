// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;

int Calcular_sumatoria(int numero);
int main()
{
    system("cls");
    int numero = 0;

    cout << "INGRESE EL NUMERO: " << endl;
    cin >> numero;

    cout << "la suma total es: " << Calcular_sumatoria(numero) << endl;

    return 0;
}
int Calcular_sumatoria(int numero)
{
    int sumatoria = 0;
    for (int i = 1; i <= numero; i++)
    {
        sumatoria = sumatoria + i;
    }
    return sumatoria;
}