// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 16/10/2024
// Número de ejercicio: 16
// Problema planteado: Parentesis valanceados
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool parenBalanceados(const string& expresion) 
{
    stack<char> pila;
    for (char c : expresion) 
    {
        if (c == '(' || c == '{' || c == '[') 
        {
            pila.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') 
        {
            if (pila.empty()) 
            {
                return false;
            }
            char apertura = pila.top();
            if ((c == ')' && apertura == '(') ||
                (c == '}' && apertura == '{') ||
                (c == ']' && apertura == '[')) 
                {
                pila.pop();  
            } else {
                return false;  
            }
        }
    }
    return pila.empty();
}
int main() 
{
    string expresion;
    cout << "Ingresa una expresión matemática: ";
    getline(cin, expresion);
    if (parenBalanceados(expresion)) 
    {
        cout << "Paréntesis balanceados CORRECTOS" << endl;
    } else 
    {
        cout << "Paréntesis NO BALANCEADOS" << endl;
    }
    return 0;
}