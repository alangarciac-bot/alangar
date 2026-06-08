#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Prototipo de la función
vector<string> encontrarRepetidos(vector<string> lista1, vector<string> lista2);

int main()
{
    vector<string> listaA = {"Juan", "María", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofía", "Luis"};

    // Llamada a la función
    vector<string> clientesEnComun = encontrarRepetidos(listaA, listaB);

    // Mostrar el resultado en pantalla
    cout << "Clientes en común: ";
    for (size_t i = 0; i < clientesEnComun.size(); ++i)
    {
        cout << clientesEnComun[i];
        if (i < clientesEnComun.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

// Definición de la función abajo del main
vector<string> encontrarRepetidos(vector<string> lista1, vector<string> lista2)
{
    vector<string> resultado;

    for (string cliente2 : lista2)
    {
        for (string cliente1 : lista1)
        {
            if (cliente2 == cliente1)
            {
                resultado.push_back(cliente2);
                break;
            }
        }
    }
    return resultado;
}
