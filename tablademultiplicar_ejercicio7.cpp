#include <iostream>
#include <iomanip>
#include <limits> 

using namespace std;

int main() {
    int numero;
    
    cout << "GENERADOR DE TABLAS DE MULTIPLICAR\n";
    cout << "----------------------------------\n";

    cout << "Ingrese un numero para generar su tabla de multiplicar: ";
    while(!(cin >> numero)) {
        cout << "Error: Por favor ingrese un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nTabla del " << numero << ":\n";
    cout << "------------------\n";
    for(int i = 1; i <= 10; ++i) {
        cout << setw(2) << numero << " x " << setw(2) << i << " = " << setw(3) << (numero * i) << endl;
    }
    
    return 0;
}