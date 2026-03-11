// Materia: Programación I, Paralelo 4
// Autor: Garcia Condori Alan Samir
// Carnet: 13084813
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 17/02/2026
#include <iostream>
using namespace std;
int main()
{
    double cateto1, cateto2, hipotenusa;
    system("cls");

    cout << "ingrese el primer cateto:";
    cin >> cateto1;

    cout << "ingrese el segundo cateto:";
    cin >> cateto2;

    double suma_de_cuadrados = cateto1 * cateto1 + cateto2 * cateto2;
    // calculamos la raiz
    double i = 0;
    double incremento = 0.00001; // usamos el 0.00001 para que sea la diferencia no afecte al resultado ya que es minima

    while (i * i < suma_de_cuadrados)

    {
        i += incremento;
    }

    hipotenusa = i;

    cout << " el primer cateto es:" << cateto1 << endl;
    cout << " el segundo cateto es:" << cateto2 << endl;
    cout << "la hipotenusa es:" << i << endl;

    return 0;
}
