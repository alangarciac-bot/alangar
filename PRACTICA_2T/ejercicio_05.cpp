// PRACTICA ADICIONAL 2T
//  Materia: Programacion I, Paralelo 4
// Autor:Alan Samir Garcia Condori
// Fecha de creacion: 01/06/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void VentasPorSucursal(vector<vector<int>> ventas);
void VentasPorDia(vector<vector<int>> ventas);

int main()
{
    srand(time(0));

    int sucursales = 4;
    int dias = 7;

    vector<vector<int>> matrizVentas(sucursales, vector<int>(dias));

    for (int i = 0; i < sucursales; i++)
    {
        for (int j = 0; j < dias; j++)
        {
            matrizVentas[i][j] = rand() % 900 + 100;
        }
    }

    cout << "--- MATRIZ DE VENTAS (4 Sucursales x 7 Dias) ---" << endl;
    cout << "\tD1\tD2\tD3\tD4\tD5\tD6\tD7" << endl;
    for (int i = 0; i < sucursales; i++)
    {
        cout << "Suc " << i + 1 << ":\t";
        for (int j = 0; j < dias; j++)
        {
            cout << matrizVentas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    VentasPorSucursal(matrizVentas);
    cout << endl;
    VentasPorDia(matrizVentas);

    return 0;
}

void VentasPorSucursal(vector<vector<int>> ventas)
{
    cout << "=== TOTAL DE VENTAS POR SUCURSAL ===" << endl;

    for (int i = 0; i < ventas.size(); i++)
    {
        int totalSucursal = 0;
        for (int j = 0; j < ventas[i].size(); j++)
        {
            totalSucursal = totalSucursal + ventas[i][j];
        }
        cout << "-> Sucursal " << i + 1 << ": " << totalSucursal << " bs/usd" << endl;
    }
}

void VentasPorDia(vector<vector<int>> ventas)
{
    cout << "=== TOTAL DE VENTAS POR DIA ===" << endl;

    int sucursales = ventas.size();
    int dias = ventas[0].size();

    for (int j = 0; j < dias; j++)
    {
        int totalDia = 0;
        for (int i = 0; i < sucursales; i++)
        {
            totalDia = totalDia + ventas[i][j];
        }
        cout << "-> Dia " << j + 1 << ": " << totalDia << " bs/usd" << endl;
    }
}
