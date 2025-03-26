#include <iostream>
#include <vector>
#include <numeric>
#include <limits>  

using namespace std;

int main() {
    int numero;
    
    cout << "VERIFICADOR DE NUMEROS PERFECTOS\n";
    cout << "--------------------------------\n";

    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;
        
        if(cin.fail() || numero <= 0) {
            cout << "Error: Debe ingresar un numero entero positivo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while(numero <= 0);

    vector<int> divisores;
    
    for(int i = 1; i <= numero/2; ++i) {
        if(numero % i == 0) {
            divisores.push_back(i);
        }
    }

    int suma = 0;
    for(int d : divisores) {
        suma += d;
    }
    
    cout << "\nDivisores propios: ";
    for(size_t i = 0; i < divisores.size(); ++i) {
        cout << divisores[i];
        if(i != divisores.size() - 1) {
            cout << " + ";
        }
    }
    
    cout << " = " << suma << endl;
    
    if(suma == numero) {
        cout << "\nEl numero " << numero << " ES un numero perfecto.\n";
    } else {
        cout << "\nEl numero " << numero << " NO es un numero perfecto.\n";
    }
    
    return 0;
}