#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Pedir al usuario que ingrese un número
    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;
    
    // Imprimir la tabla de multiplicar usando un bucle for
    cout << "\nTabla de multiplicar del " << numero << ":\n";
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    
    return 0;
}