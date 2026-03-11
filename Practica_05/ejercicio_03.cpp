#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
float Calcular_salario(float horas, float tarifa);
float Calcular_bonificacion(float tarifa, float horas);
int main()
{
    srand(time(0));
    system("cls");
    float horas_trabajadas = 0;
    float tarifa_horas = 0;

    cout << "ingrese las horas del trabajado:";
    cin >> horas_trabajadas;
    cout << "ingrese la tarifa por hora:";
    cin >> tarifa_horas;

    float salario_base = Calcular_salario(horas_trabajadas, tarifa_horas);
    float bonificacion = Calcular_bonificacion(horas_trabajadas, tarifa_horas);

    cout << "el salario base es: " << salario_base << endl;

    if (bonificacion > 0)
    {
        cout << "el salario sera por horas extras:" << bonificacion << "bs" << endl;
        cout << "el seuldo total es :" << salario_base + bonificacion << "bs" << endl;
    }
    else
    {
        cout << "no tiene bonificaciom" << endl;
    }
}

float Calcular_salario(float horas, float tarifa)
{
    if (horas > 8)
    {
        return 8 * tarifa;
    }
    return horas * tarifa;
}
float Calcular_bonificacion(float tarifa, float horas)
{
    if (horas > 8)
    {
        float bonificacion = 0;
        float horas_Extra = horas - 8;
        bonificacion = horas_Extra * tarifa;
        return bonificacion;
    }
    return 0;
}