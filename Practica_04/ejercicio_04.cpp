// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
float calcular_cambioParalelo(float dolar_paralelo, float moneda_02);
float calcular_cambioOficial(float dolar_ofical, float moneda_01);

int main()
{
    system("cls");
    float moneda_01 = 0;
    float moneda_02 = 0;
    float dolar_ofical = 6.97;
    float dolar_paralelo = 9.08;
    cout << "ingrese el primer valor: " << endl;
    cin >> moneda_01;
    cout << "ingrese el segundo valor: " << endl;
    cin >> moneda_02;

    cout << "el cambio de dolares a Bs es:" << calcular_cambioParalelo(dolar_paralelo, moneda_02) << " en cambio paralelo" << endl;
    cout << "el cambio de dolares a Bs es:" << calcular_cambioOficial(dolar_ofical, moneda_01) << " en cambio oficial" << endl;

    return 0;
}
float calcular_cambioParalelo(float dolar_paralelo, float moneda_02)
{
    float cambioParalelo = 0;
    cambioParalelo = moneda_02 * dolar_paralelo;
    return cambioParalelo;
}
float calcular_cambioOficial(float dolar_ofical, float moneda_01)
{
    float cambioOficial = 0;
    cambioOficial = moneda_01 * dolar_ofical;
    return cambioOficial;
}