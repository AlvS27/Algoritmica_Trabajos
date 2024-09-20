/*Programa: Edad_agil*/
#include <iostream>

using namespace std;

int main()
{
    int dia,mes,ano,edad;
    cout << "Ingrese su Dia de Nacimieto: ";
    cin >> dia;
    cout << "Ingrese su Mes de Nacimieto: ";
    cin >> mes;
    cout << "Ingrese su Año de Nacimieto: ";
    cin >> ano;

    edad=2024-ano;

    cout << "Tu edad es de: " << edad << " años" << endl;
    return 0;
}
