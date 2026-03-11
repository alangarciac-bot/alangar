// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
float Calcular_area(float base, float altura);

int main()
{
    system("cls");
    float area = 0;
    float base = 0;
    float altura = 0;
    cout << "ingrese la altura:" << endl;
    cin >> altura;
    cout << "ingrese la base: " << endl;
    cin >> base;

    cout << "El area calculando es: " << Calcular_area(base, altura) << endl;
    return 0;
}
float Calcular_area(float base, float altura)
{
    float area = 0;
    area = (base * altura) / 2;
    return area;
}
