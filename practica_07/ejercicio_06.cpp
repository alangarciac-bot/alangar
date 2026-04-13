// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 6
#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;

    int resto = totalSegundos % 3600;

    minutos = resto / 60;

    segundos = resto % 60;
}

int main()
{
    int tiempoTotal = 3661;
    int h, m, s;

    calcularTiempo(tiempoTotal, h, m, s);

    cout << "--- Desglose de Tiempo ---" << endl;
    cout << "Segundos totales: " << tiempoTotal << endl;
    cout << "Resultado: " << h << " horas, " << m << " minutos y " << s << " segundos." << endl;

    return 0;
}
