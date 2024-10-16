// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 2
// Problema planteado: Numero de vocales
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    int vocales = 0;
    for (int i = 0; i < input.length(); i++) 
    {
        char c = tolower(input[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            vocales++;
        }
    }
    cout << "Numero de vocales: " << vocales << endl;
    return 0;
}