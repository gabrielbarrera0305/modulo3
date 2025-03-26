#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string decimalABinario(int numero) {
    if (numero == 0) return "0";
    
    string binario;
    while (numero > 0) {
        binario += (numero % 2) ? '1' : '0';
        numero /= 2;
    }
    reverse(binario.begin(), binario.end());
    return binario;
}

string decimalAHexadecimal(int numero) {
    if (numero == 0) return "0";
    
    string hexadecimal;
    while (numero > 0) {
        int residuo = numero % 16;
        if (residuo < 10) {
            hexadecimal += '0' + residuo;
        } else {
            hexadecimal += 'A' + (residuo - 10);
        }
        numero /= 16;
    }
    reverse(hexadecimal.begin(), hexadecimal.end());
    return hexadecimal;
}

int main() {
    int numero;
    char opcion;
    
    cout << "CONVERSOR DE BASES NUMERICAS\n";
    cout << "----------------------------\n";

    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;
        
        if (cin.fail() || numero < 0) {
            cout << "Error: Debe ingresar un numero entero positivo.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (numero < 0);

    do {
        cout << "\nConvertir a:\n";
        cout << "1. Binario\n";
        cout << "2. Hexadecimal\n";
        cout << "Elija una opcion (1-2): ";
        cin >> opcion;
        
        if (opcion != '1' && opcion != '2') {
            cout << "Opcion no valida. Intente nuevamente.\n";
        }
    } while (opcion != '1' && opcion != '2');

    cout << "\nResultado: ";
    if (opcion == '1') {
        cout << "Binario: " << decimalABinario(numero) << endl;
    } else {
        cout << "Hexadecimal: " << decimalAHexadecimal(numero) << endl;
    }
    
    return 0;
}