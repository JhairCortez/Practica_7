// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 8
// Problema planteado: Alterne entre mayusculas y minusculas
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) 
    {
        if (i % 2 == 0) {
            input[i] = toupper(input[i]); 
        } else {
            input[i] = tolower(input[i]); 
        }
    }
    cout << "Cadena alternada: " << input << endl;
    return 0;
}