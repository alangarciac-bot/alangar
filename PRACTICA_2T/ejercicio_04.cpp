// PRACTICA ADICIONAL 2T
//  Materia: Programacion I, Paralelo 4
// Autor:Alan Samir Garcia Condori
// Fecha de creacion: 01/06/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<int>> generarMatriz(int n, int a, int b);
void analizarMatriz(vector<vector<int>> matriz);

int main()
{
    srand(time(0));

    int N = 3;
    int A = 1;
    int B = 9;

    vector<vector<int>> matriz = generarMatriz(N, A, B);

    cout << "Matriz generada de " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    analizarMatriz(matriz);

    return 0;
}

vector<vector<int>> generarMatriz(int n, int a, int b)
{

    vector<vector<int>> matriz(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            matriz[i][j] = rand() % (b - a + 1) + a;
        }
    }
    return matriz;
}

void analizarMatriz(vector<vector<int>> matriz)
{
    int n = matriz.size();

    int sumaColumna = 0;
    for (int i = 0; i < n; i++)
    {
        sumaColumna = sumaColumna + matriz[i][0];
    }

    long long productoFila = 1;
    for (int j = 0; j < n; j++)
    {
        productoFila = productoFila * matriz[0][j];
    }

    int menor = matriz[0][0];
    int filaMenor = 0;
    int colMenor = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                filaMenor = i;
                colMenor = j;
            }
        }
    }

    cout << "--- DETERMINACIONES ---" << endl;
    cout << "-> La suma de la primera columna es: " << sumaColumna << endl;
    cout << "-> El producto total de la primera fila es: " << productoFila << endl;
    cout << "-> El menor valor es: " << menor << endl;

    cout << "   Posicion: [Fila " << filaMenor + 1 << ", Columna " << colMenor + 1 << "]" << endl;
}
