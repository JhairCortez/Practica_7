// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 3
// Problema planteado: Eliminar espacios de la cadena
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    string sin_espacios = "";
    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] != ' ') 
        {
            sin_espacios += input[i];
        }
    }
    cout << "Cadena sin espacios: " << sin_espacios << endl;
    return 0;
}