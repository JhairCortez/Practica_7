// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 14
// Problema planteado: Encuentre la palabra mas larga
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una oración: ";
    getline(cin, input);
    string palabra_larga = "";
    int max_longitud = 0;
    string palabra = "";
    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] == ' ') 
        {
            if (palabra.length() > max_longitud) 
            {
                palabra_larga = palabra;
                max_longitud = palabra.length();
            }
            palabra = "";
        } else 
        {
            palabra += input[i];
        }
    }
    if (palabra.length() > max_longitud) 
    {
        palabra_larga = palabra;
    }
    cout << "La palabra más larga es: " << palabra_larga << endl;
    return 0;
}