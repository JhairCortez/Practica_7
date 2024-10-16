// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 11
// Problema planteado: Elimine los digitos de una cadena
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    string sin_digitos = "";
    for (int i = 0; i < input.length(); i++) 
    {
        if (!isdigit(input[i])) 
        {
            sin_digitos += input[i];
        }
    }
    cout << "Cadena sin dígitos: " << sin_digitos << endl;
    return 0;
}