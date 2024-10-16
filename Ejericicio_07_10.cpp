// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 10
// Problema planteado: Expanda la cadena
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena comprimida: ";
    getline(cin, input);
    string expandida = "";
    for (int i = 0; i < input.length(); i++) 
    {
        char caracter = input[i];
        int contador = 0;
        while (isdigit(input[++i])) 
        {
            contador = contador * 10 + (input[i] - '0');  
        }
        i--; 
        expandida.append(contador, caracter);
    }
    cout << "Cadena expandida: " << expandida << endl;
    return 0;
}