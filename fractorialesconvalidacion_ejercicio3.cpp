#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1; 

    cout << "CALCULADORA DE FACTORIAL\n";
    cout << "------------------------\n";

    do {
        cout << "Ingrese un numero entero positivo (0-50): ";

        while(!(cin >> numero)) {
            cout << "Error: Por favor ingrese un numero valido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if(numero < 0) {
            cout << "Error: El numero debe ser positivo.\n";
        } else if(numero > 50) {
            cout << "Error: El numero debe ser menor o igual a 50 (el factorial de 51 es demasiado grande).\n";
        }
    } while(numero < 0 || numero > 50);

    for(int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "\nEl factorial de " << numero << " es: " << factorial << endl;

    return 0;
}