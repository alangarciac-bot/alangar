// Materia: Programación I, Paralelo 4
// Autor: Alan Samir Garcia Condori.
// Fecha creación: 22/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void depurarRegistros(vector<string> &lista, char ilegal, int &cambios);

int main()
{

    vector<string> bitacora = {"An*a", "Juan ", "Ma*ria", "Carl*os", " Luis"};
    char prohibido = '*';
    int totalCorrecciones = 0;

    cout << "=== BITACORA ORIGINAL ===" << endl;
    for (const string &nombre : bitacora)
    {
        cout << "[" << nombre << "]" << endl;
    }

    depurarRegistros(bitacora, prohibido, totalCorrecciones);

    cout << "\n=== BITACORA LIMPIA ===" << endl;
    for (const string &nombre : bitacora)
    {
        cout << "[" << nombre << "]" << endl;
    }

    cout << "\nSe realizaron " << totalCorrecciones << " correcciones de caracteres." << endl;

    return 0;
}

void depurarRegistros(vector<string> &lista, char ilegal, int &cambios)
{

    for (int i = 0; i < lista.size(); i++)
    {
        size_t posicion;
        while ((posicion = lista[i].find(ilegal)) != string::npos)
        {
            lista[i].erase(posicion, 1);
            cambios++;
        }
    }
}
