// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 13
// Problema planteado: Invierta el orden de las palabras
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string input;
    cout << "Ingresa una oración: ";
    getline(cin, input);
    vector<string> palabras;
    string palabra = "";
    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] == ' ') 
        {
            if (!palabra.empty()) 
            {
                palabras.push_back(palabra);
                palabra = ""; 
            }
        } else 
        {
            palabra += input[i];
        }
    }
    if (!palabra.empty()) 
    {
        palabras.push_back(palabra);
    }
    cout << "Oración con las palabras invertidas: ";
    for (int i = palabras.size() - 1; i >= 0; i--) 
    {
        cout << palabras[i] << " ";
    }
    cout << endl;
    return 0;
}