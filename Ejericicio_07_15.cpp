// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 15
// Problema planteado: Correo electronico
#include <iostream>
#include <string>
using namespace std;

bool validarCorreo(const string& correo) 
{
    size_t arrobaPos = correo.find('@');
    if (arrobaPos == string::npos || correo.find('@', arrobaPos + 1) != string::npos) 
    {
        return false;
    }
    size_t puntoPos = correo.find('.', arrobaPos);

    if (puntoPos == string::npos || puntoPos == arrobaPos + 1) 
    {
        return false;
    }
    return true;
}
int main() 
{
    string correo;
    cout << "Ingresa una dirección de correo electrónico: ";
    getline(cin, correo);
    if (validarCorreo(correo)) 
    {
        cout << "Correo electrónico válido" << endl;
    } else 
    {
        cout << "Correo electrónico inválido" << endl;
    }
    return 0;
}