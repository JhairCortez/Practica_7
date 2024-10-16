// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 12
// Problema planteado: Divida una cadena en tokens
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    string input;
    char delimitador;
    cout << "Ingresa la cadena: ";
    getline(cin, input);
    cout << "Ingresa el delimitador: ";
    cin >> delimitador;
    stringstream ss(input);
    string token;
    while (getline(ss, token, delimitador)) 
    {
        cout << token << endl;
    }
    return 0;
}