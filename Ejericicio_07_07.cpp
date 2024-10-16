// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 7
// Problema planteado: Frecuencia de cada cadena
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una cadena: ";
    getline(cin, input);
    map<char, int> frecuencia;
    for (int i = 0; i < input.length(); i++) 
    {
        char c = input[i];
        frecuencia[c]++;
    }
    for (auto& par : frecuencia);
    {
        cout << par.first << ": " << par.second << endl;
    }
    return 0;
}