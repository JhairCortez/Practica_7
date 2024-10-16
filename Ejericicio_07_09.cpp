// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 9
// Problema planteado: Comprima una cadena de caracteres
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    string comprimida = "";
    int contador = 1;
    for (int i = 0; i < input.length(); i++) 
    {
        if (i < input.length() - 1 && input[i] == input[i + 1]) 
        {
            contador++;
        } else {
            comprimida += input[i];
            comprimida += to_string(contador);
            contador = 1; 
        }
    }
    cout << "Cadena comprimida: " << comprimida << endl;
    return 0;
}