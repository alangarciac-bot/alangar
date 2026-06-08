// PRACTICA ADICIONAL 2T
//  Materia: Programacion I, Paralelo 4
// Autor:Alan Samir Garcia Condori
// Fecha de creacion: 01/06/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> calcularRangos(vector<int> pixeles);

int main()
{

    srand(time(0));

    int N = 15;
    vector<int> pixeles;

    for (int i = 0; i < N; i++)
    {
        pixeles.push_back(rand() % 256);
    }

    cout << "Entrada:" << endl;
    cout << "Pixeles: ";
    for (int i = 0; i < pixeles.size(); i++)
    {
        cout << pixeles[i] << " ";
    }
    cout << "\n\nSalida:" << endl;

    vector<int> resultadoConteos = calcularRangos(pixeles);

    for (int i = 0; i < 26; i++)
    {
        int inicio = i * 10;
        int fin = i * 10 + 9;

        if (fin > 255)
        {
            fin = 255;
        }

        cout << inicio << "-" << fin << ": ";

        if (resultadoConteos[i] == 1)
        {
            cout << "1 píxel" << endl;
        }
        else
        {
            cout << resultadoConteos[i] << " píxeles" << endl;
        }
    }

    return 0;
}

vector<int> calcularRangos(vector<int> pixeles)
{

    vector<int> conteos(26, 0);

    for (int pixel : pixeles)
    {
        int posicionRango = pixel / 10;
        conteos[posicionRango]++;
    }

    return conteos;
}
