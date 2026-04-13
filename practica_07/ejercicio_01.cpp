// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori
// Fecha creación: 12/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void listaVoltajes()
{
    vector<double> voltajes;
    for (int i = 0; i < 100; i++)
    {
        double v = 20.0 + (double)rand() / RAND_MAX * (220.0 - 20.0);
        voltajes.push_back(v);
    }
    cout << "Lista de 100 voltajes generada." << endl;
}

void listaTemperaturas()
{
    vector<double> temps;
    for (int i = 0; i < 50; i++)
    {
        double t = 0.0 + (double)rand() / RAND_MAX * (100.0 - 0.0);
        temps.push_back(t);
    }
    cout << "Lista de 50 temperaturas generada." << endl;
}

void listaCaracteres()
{
    vector<char> caracteres;
    string opciones = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 30; i++)
    {
        char c = opciones[rand() % opciones.length()];
        caracteres.push_back(c);
    }
    cout << "Lista de 30 caracteres alfanumericos generada." << endl;
}

void listaAnios()
{
    vector<int> anios;
    for (int i = 0; i < 100; i++)
    {
        int a = 1990 + rand() % (2025 - 1990 + 1);
        anios.push_back(a);
    }
    cout << "Lista de 100 anios generada." << endl;
}

void listaVelocidades()
{
    vector<double> vels;
    for (int i = 0; i < 32; i++)
    {
        double v = 10.0 + (double)rand() / RAND_MAX * (300.0 - 10.0);
        vels.push_back(v);
    }
    cout << "Lista de 32 velocidades generada." << endl;
}

void listaDistancias()
{
    vector<double> dists;
    for (int i = 0; i < 1000; i++)
    {
        double d = 1.0 + (double)rand() / RAND_MAX * (1000.0 - 1.0);
        dists.push_back(d);
    }
    cout << "Lista de 1000 distancias generada." << endl;
}

int main()
{
    srand(time(NULL));

    listaVoltajes();
    listaTemperaturas();
    listaCaracteres();
    listaAnios();
    listaVelocidades();
    listaDistancias();

    return 0;
}
