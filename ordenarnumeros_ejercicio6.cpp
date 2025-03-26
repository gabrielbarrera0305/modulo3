#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits> 

using namespace std;

int main() {
    vector<int> numeros;
    int cantidad;
    
    cout << "ORDENADOR DE NUMEROS\n";
    cout << "--------------------\n";

    do {
        cout << "¿Cuantos numeros desea ingresar? ";
        cin >> cantidad;
        
        if(cin.fail() || cantidad <= 0) {
            cout << "Error: Debe ingresar un numero entero positivo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while(cin.fail() || cantidad <= 0);

    cout << "\nIngrese los " << cantidad << " numeros:\n";
    for(int i = 0; i < cantidad; ++i) {
        int num;
        cout << "Numero " << i+1 << ": ";
        while(!(cin >> num)) {
            cout << "Error: Ingrese un numero valido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        numeros.push_back(num);
    }

    sort(numeros.begin(), numeros.end());
    cout << "\nOrden ascendente: ";
    for(int num : numeros) {
        cout << num << " ";
    }

    sort(numeros.rbegin(), numeros.rend());
    cout << "\nOrden descendente: ";
    for(int num : numeros) {
        cout << num << " ";
    }
    
    cout << endl;
    return 0;
}