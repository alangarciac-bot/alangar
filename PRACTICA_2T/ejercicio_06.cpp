// PRACTICA ADICIONAL 2T
//  Materia: Programacion I, Paralelo 4
// Autor:Alan Samir Garcia Condori
// Fecha de creacion: 01/06/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<double> calcularPromedios(vector<vector<double>> notas);
void reportarResultados(vector<double> promedios);

int main()
{
    srand(time(0));

    int estudiantes = 20;
    int parciales = 3;

    vector<vector<double>> matrizNotas(estudiantes, vector<double>(parciales));

    for (int i = 0; i < estudiantes; i++)
    {
        for (int j = 0; j < parciales; j++)
        {
            matrizNotas[i][j] = rand() % 91 + 10;
        }
    }

    cout << "--- REGISTRO DE NOTAS DE LOS 20 ESTUDIANTES ---" << endl;
    cout << "Lista\t\tParc 1\tParc 2\tParc 3" << endl;
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Estudiante " << i + 1 << ":\t";
        for (int j = 0; j < parciales; j++)
        {
            cout << matrizNotas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    vector<double> promediosFinales = calcularPromedios(matrizNotas);

    reportarResultados(promediosFinales);

    return 0;
}

vector<double> calcularPromedios(vector<vector<double>> notas)
{
    vector<double> promedios;

    for (int i = 0; i < notas.size(); i++)
    {
        double sumaNotasEstudiante = 0;
        for (int j = 0; j < notas[i].size(); j++)
        {
            sumaNotasEstudiante = sumaNotasEstudiante + notas[i][j];
        }

        double promedioSimple = sumaNotasEstudiante / 3.0;
        promedios.push_back(promedioSimple);
    }
    return promedios;
}

void reportarResultados(vector<double> promedios)
{
    double sumaDeTodosLosPromedios = 0;
    double mejorPromedio = promedios[0];
    int indiceMejorEstudiante = 0;

    cout << "--- PROMEDIOS INDIVIDUALES ---" << endl;
    for (int i = 0; i < promedios.size(); i++)
    {
        cout << "-> Estudiante " << i + 1 << ": " << promedios[i] << endl;

        sumaDeTodosLosPromedios = sumaDeTodosLosPromedios + promedios[i];

        if (promedios[i] > mejorPromedio)
        {
            mejorPromedio = promedios[i];
            indiceMejorEstudiante = i;
        }
    }
    cout << endl;

    double promedioGeneralGrupo = sumaDeTodosLosPromedios / promedios.size();

    cout << "================ REPORTE FINAL ================" << endl;
    cout << "-> Promedio general del grupo: " << promedioGeneralGrupo << endl;
    cout << "-> Numero de lista del estudiante con mejor promedio: " << indiceMejorEstudiante + 1 << endl;
    cout << "   (Nota obtenida por este estudiante: " << mejorPromedio << ")" << endl;
    cout << "===============================================" << endl;
}
