#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

const int PACIENTES = 5;
const int HORAS = 24;

void VerificarAlertas(const std::vector<std::string> &nombres, float monitoreo[PACIENTES][HORAS], float umbral)
{
    std::cout << "=== ALERTAS DE TEMPERATURA (Umbral: " << umbral << "C) ===\n";
    bool hubo_alertas = false;

    for (int i = 0; i < PACIENTES; ++i)
    {
        int contador_excesos = 0;

        for (int j = 0; j < HORAS; ++j)
        {
            if (monitoreo[i][j] > umbral)
            {
                contador_excesos++;
            }
        }

        if (contador_excesos > 3)
        {
            std::cout << "[ALERTA] El paciente " << nombres[i]
                      << " supero el umbral " << contador_excesos << " veces.\n";
            hubo_alertas = true;
        }
    }

    if (!hubo_alertas)
    {
        std::cout << "Ningun paciente supero el umbral en mas de 3 ocasiones.\n";
    }
}

int main()
{
    srand(time(0));

    std::vector<std::string> pacientes = {
        "Ana Torroja",
        "Juan Luna",
        "Sergio Murillo",
        "Liliana Espinoza",
        "Mercedes Lima"};

    float monitoreo[PACIENTES][HORAS];

    for (int i = 0; i < PACIENTES; ++i)
    {
        for (int j = 0; j < HORAS; ++j)
        {
            // rand() % (Max - Min + 1) + Min
            int parte_entera = rand() % (40 - 20 + 1) + 20;
            float parte_decimal = (rand() % 10) / 10.0;
            monitoreo[i][j] = parte_entera + parte_decimal;
        }
    }

    float umbral_critico = 37.5;
    VerificarAlertas(pacientes, monitoreo, umbral_critico);

    return 0;
}
