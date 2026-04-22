// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 22/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>

using namespace std;

// 1. Declaración del prototipo
void calcularMetricas(string est[], int calificaciones[], int tam, float &media, int &cuentaAprobados);

int main()
{
    string estudiantes[] = {"Carlos", "Lucia", "Jorge", "Elena"};
    int puntajes[] = {46, 25, 80, 49};
    int totalItems = 4;

    float mediaFinal = 0;
    int totalAprobados = 0;

    calcularMetricas(estudiantes, puntajes, totalItems, mediaFinal, totalAprobados);

    cout << "--- REPORTE ACADEMICO ---" << endl;
    for (int i = 0; i < totalItems; i++)
    {
        cout << ">> " << estudiantes[i] << " obtuvo: " << puntajes[i] << endl;
    }

    cout << "\nRESUMEN:" << endl;
    cout << "Media del curso: " << mediaFinal << endl;
    cout << "Cantidad que aprobo: " << totalAprobados << endl;

    return 0;
}

void calcularMetricas(string est[], int calificaciones[], int tam, float &media, int &cuentaAprobados)
{
    float acumulador = 0;
    cuentaAprobados = 0;

    for (int j = 0; j < tam; j++)
    {

        if (calificaciones[j] >= 45 && calificaciones[j] <= 50)
        {
            calificaciones[j] = 51;
        }

        acumulador += calificaciones[j];

        if (calificaciones[j] >= 51)
        {
            cuentaAprobados++;
        }
    }

    if (tam > 0)
    {
        media = acumulador / tam;
    }
}
