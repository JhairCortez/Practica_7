// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 4
// Problema planteado: Comparacion de 2 cadenas
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cadena1, cadena2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, cadena2);
    if (cadena1.length() != cadena2.length()) 
    {
        cout << "Las cadenas son diferentes" << endl;
        return 0;
    }
    for (int i = 0; i < cadena1.length(); i++) 
    {
        cadena1[i] = tolower(cadena1[i]);
        cadena2[i] = tolower(cadena2[i]);
    }
    if (cadena1 == cadena2) 
    {
        cout << "Las cadenas son iguales" << endl;
    } else 
    {
        cout << "Las cadenas son diferentes" << endl;
    }

    return 0;
}