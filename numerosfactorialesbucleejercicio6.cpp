#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: El numero debe ser positivo." << endl;
        return 1; 
    }
    for(int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    int modulo = factorial % 10;

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    cout << "El modulo por 10 del factorial es: " << modulo << endl;
    
    return 0;
}