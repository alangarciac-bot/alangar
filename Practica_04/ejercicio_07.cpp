// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;
float Calcular_distancia(float velocidad, float tiempo);
int main()
{
    system("cls");
    float velocidad = 0;
    float tiempo = 0;
    cout << "A que Velocidad vas ALAN: " << endl;
    cin >> velocidad;
    cout << "Cuanto tiempo tardaste: " << endl;
    cin >> tiempo;

    cout << "EL CALCULO DE MRUV SEGUN TUS DATOS" << endl;
    cout << "de acuerdo a tu velocidad y tiempo, esta es tu distancia: " << Calcular_distancia(velocidad, tiempo) << " KM" << endl;

    return 0;
}
float Calcular_distancia(float velocidad, float tiempo)
{
    float distancia = 0;
    distancia = velocidad * tiempo;
    return distancia;
}