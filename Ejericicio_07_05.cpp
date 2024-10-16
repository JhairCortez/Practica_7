// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 5
// Problema planteado: Contar cuantas palabras hay en una horacion
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una oración: ";
    getline(cin, input);
    if (input.empty()) 
    {
        cout << "Numero de palabras: 0" << endl;
        return 0;
    }
    int palabras = 1;
    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] == ' ' && input[i + 1] != ' ' && i + 1 < input.length()) 
        {
            palabras++;
        }
    }
    cout << "Numero de palabras: " << palabras << endl;
    return 0;
}