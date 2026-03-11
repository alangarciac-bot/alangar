// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
int Encontrar_mayor(int primer, int segundo, int tercer);
int main()
{
    system("cls");
    int primer = 0;
    int segundo = 0;
    int tercer = 0;
    int resultado = 0;
    cout << "ingrese el 1er valor: " << endl;
    cin >> primer;
    cout << "ingrese el 2do valor: " << endl;
    cin >> segundo;
    cout << "ingrese el 3er valor: " << endl;
    cin >> tercer;

    resultado = Encontrar_mayor(primer, segundo, tercer);
    cout << "El numero mayor es: " << resultado << endl;
    return 0;
}
int Encontrar_mayor(int primer, int segundo, int tercer)
{
    int mayor = primer;
    if (segundo > mayor)
    {
        mayor = segundo;
    }
    if (tercer > mayor)
    {
        mayor = tercer;
    }
    return mayor;
}