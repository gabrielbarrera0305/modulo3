#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    while (numero < 0) {
        cout << "Error: Solo se permiten numeros positivos. Intente nuevamente: ";
        cin >> numero;
    }

    int temp = numero;
    while (temp != 0) {
        invertido = invertido * 10 + temp % 10;
        temp /= 10;
    }
    
    cout << "Numero original: " << numero << endl;
    cout << "Numero invertido: " << invertido << endl;
    
    return 0;
}