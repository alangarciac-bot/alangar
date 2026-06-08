// PRACTICA ADICIONAL 2T
//  Materia: Programacion I, Paralelo 4
// Autor:Alan Samir Garcia Condori
// Fecha de creacion: 01/06/2026
#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string texto);

int main()
{

    string frase = "Ana lleva al oso la avellana.";

    cout << "Frase a evaluar: " << frase << endl;

    if (esPalindromo(frase))
    {
        cout << "Resultado: Verdadero (Es palindromo)" << endl;
    }
    else
    {
        cout << "Resultado: Falso (No es palindromo)" << endl;
    }

    return 0;
}

bool esPalindromo(string texto)
{
    string textoLimpio = "";

    for (char c : texto)
    {
        if (c >= 'A' && c <= 'Z')
        {
            textoLimpio += (c + 32);
        }
        else if (c >= 'a' && c <= 'z')
        {
            textoLimpio += c;
        }
    }

    int inicio = 0;
    int fin = textoLimpio.length() - 1;

    while (inicio < fin)
    {
        if (textoLimpio[inicio] != textoLimpio[fin])
        {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}
