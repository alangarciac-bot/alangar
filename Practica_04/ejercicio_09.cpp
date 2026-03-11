// Materia:Programacion l,Paralelo 4
// Autor:Alan Samir Garcia Condori
// Carnet: 13084813
// Fecha de creacion: 10/03/2026
#include <iostream>
using namespace std;

float Calcular_promedio(float primer_nota, float segunda_nota);

int main()
{
    system("cls");
    float primer_nota = 0;
    float segunda_nota = 0;
    float promedio = 0;
    cout << "ingrese tu primer nota para hacer el calculo: " << endl;
    cin >> primer_nota;
    cout << "ingrese tu segunda nota para hacer el calculo: " << endl;
    cin >> segunda_nota;

    cout << "el promedio es de: " << Calcular_promedio(primer_nota, segunda_nota) << endl;

    if (promedio >= 51)
    {
        cout << "aprobaste con la nota de: " << Calcular_promedio(primer_nota, segunda_nota) << endl;
    }
    else
    {
        cout << "reprobaste  con la nota de: " << Calcular_promedio(primer_nota, segunda_nota) << endl;
    }

    return 0;
}
float Calcular_promedio(float primer_nota, float segunda_nota)
{
    float promedio = 0;
    promedio = (primer_nota + segunda_nota) / 2;
    return promedio;
}
