// Materia: Programación I, Paralelo 4
// Autor: alan samir garcia condori
// Fecha creación: 01/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <cmath>

using namespace std;

// --- DEFINICIÓN DE LAS FUNCIONES SOBRECARGADAS ---

// 1. Para un cuadrado (un solo parámetro double)
double calcularArea(double lado)
{
    return lado * lado;
}

// 2. Para un rectángulo (dos parámetros double)
double calcularArea(double base, double altura)
{
    return base * altura;
}

// 3. Para un círculo (un parámetro float y PI)
float calcularArea(float radio, float PI)
{
    return PI * pow(radio, 2);
}

int main()
{
    double lado = 5.0;
    double areaCuadrado = calcularArea(lado);
    cout << "El area del cuadrado es: " << areaCuadrado << endl;

    double b = 10.0;
    double h = 4.0;
    double areaRectangulo = calcularArea(b, h);
    cout << "El area del rectangulo es: " << areaRectangulo << endl;

    float r = 3.0f;
    float valorPI = 3.14159f;
    float areaCirculo = calcularArea(r, valorPI);
    cout << "El area del circulo es: " << areaCirculo << endl;

    return 0;
}
