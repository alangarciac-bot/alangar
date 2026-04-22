// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 22/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 3;
const int COLS = 3;

void rellenarStock(int matriz[FILAS][COLS]);
void ajustarInventario(int matriz[FILAS][COLS], int fila, int &movimientos);
void imprimirEstado(string etiquetas[], int matriz[FILAS][COLS]);

int main()
{
    srand(time(0));

    string articulos[] = {"Pernos", "Arandelas", "Remaches"};
    int stock[FILAS][COLS];
    int unidadesMovidas = 0;

    rellenarStock(stock);

    cout << "=== ESTADO DE ALMACEN INICIAL ===" << endl;
    imprimirEstado(articulos, stock);

    for (int k = 0; k < FILAS; k++)
    {
        ajustarInventario(stock, k, unidadesMovidas);
    }

    cout << "\n=== ESTADO TRAS REUBICACION ===" << endl;
    imprimirEstado(articulos, stock);

    cout << "Cant. de mercancia reubicada: " << unidadesMovidas << " unidades." << endl;

    return 0;
}

void rellenarStock(int matriz[FILAS][COLS])
{
    for (int f = 0; f < FILAS; f++)
    {
        for (int c = 0; c < COLS; c++)
        {

            matriz[f][c] = rand() % 101;
        }
    }
}

void ajustarInventario(int matriz[FILAS][COLS], int fila, int &movimientos)
{

    if (matriz[fila][0] > 80)
    {
        int sobrante = matriz[fila][0] - 80;
        matriz[fila][0] = 80;
        matriz[fila][1] += sobrante;
        movimientos += sobrante;
    }
}

void imprimirEstado(string etiquetas[], int matriz[FILAS][COLS])
{
    for (int i = 0; i < FILAS; i++)
    {
        cout << "Item: " << etiquetas[i] << "\t| ";
        for (int j = 0; j < COLS; j++)
        {
            cout << "Sec[" << j << "]: " << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}
