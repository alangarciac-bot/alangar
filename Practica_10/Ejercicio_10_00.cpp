// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 22/04/2026
// Número de ejercicio: 0

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void crearListaPersonas(string n[], string ap[], int total);

int main()
{
    srand(time(0));

    string listaN[] = {"Rossio", "Humberto", "Silvia", "Jose", "Norma", "Ramiro", "Clara", "Saul", "Ines", "Mateo"};
    string listaA[] = {"Solis", "Luna", "Vega", "Mora", "Roca", "Cruz", "Cano", "Rivas", "Blanco", "Soto"};

    int cantidad;
    cout << "Ingrese el numero de personas a generar: ";
    cin >> cantidad;

    if (cantidad > 0)
    {
        crearListaPersonas(listaN, listaA, cantidad);
    }
    else
    {
        cout << "Cantidad invalida." << endl;
    }

    return 0;
}

void crearListaPersonas(string n[], string ap[], int total)
{
    cout << "\n--- LISTA GENERADA ---" << endl;

    for (int k = 0; k < total; k++)
    {
        int r1 = rand() % 10;
        int r2 = rand() % 10;

        cout << k + 1 << ")\t" << n[r1] << " " << ap[r2] << endl;
    }
    cout << "----------------------" << endl;
}
