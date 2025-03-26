#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros;
    int cantidad;
    
    cout << "Cuantos numeros deseas ingresar? ";
    cin >> cantidad;
    
    cout << "Ingresa " << cantidad << " numeros:\n";
    for(int i = 0; i < cantidad; i++) {
        int num;
        cin >> num;
        numeros.push_back(num);
    }
    
    sort(numeros.begin(), numeros.end());
    
    cout << "\nNumeros repetidos:\n";
    for(int i = 0; i < numeros.size(); i++) {
        if(i > 0 && numeros[i] == numeros[i-1]) {
            int contador = 1;
            while(i < numeros.size() && numeros[i] == numeros[i-1]) {
                contador++;
                i++;
            }
            cout << numeros[i-1] << ": " << contador << " veces\n";
        }
    }
    
    return 0;
}