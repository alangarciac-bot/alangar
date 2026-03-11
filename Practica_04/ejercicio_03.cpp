// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
float Calcular_volumen(float R, float altura, float pi);
int main()
{
    system("cls");
    float R = 0;
    float altura = 0;
    float pi = 3.1415;
    float v = 0;
    cout << "ingrese el valor de : " << endl;
    cin >> R;
    cout << "ingrese el valor de : " << endl;
    cin >> altura;

    cout << "El volumen calculado es: " << Calcular_volumen(R, altura, pi) << endl;
    return 0;
}
float Calcular_volumen(float R, float altura, float pi)
{
    float volumen = 0;
    volumen = (pi * (R * R) * altura);
    return volumen;
}