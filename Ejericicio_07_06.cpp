// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 6
// Problema planteado: Determine si una cadena es palindromo
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
        input[i] = tolower(input[i]);
    }
    int inicio = 0;
    int fin = input.length() - 1;
    bool es_palindromo = true;
    while (inicio < fin) 
    {
        if (input[inicio] != input[fin]) 
        {
            es_palindromo = false;
            break;
        }
        inicio++;
        fin--;
    }
    if (es_palindromo) 
    {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }
    return 0;
}