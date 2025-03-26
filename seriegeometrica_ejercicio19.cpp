#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double primerTermino, razon;
    int n;

    cout << "=== CALCULADORA DE SERIE GEOMETRICA ===" << endl;
    cout << "Ingrese el primer termino (a1): ";
    cin >> primerTermino;
    cout << "Ingrese la razon (r): ";
    cin >> razon;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    if (razon == 1) {
        cout << "\nLa suma de la serie es: " << primerTermino * n << endl;
    } else {
        double suma = primerTermino * (1 - pow(razon, n)) / (1 - razon);
        cout << "\nLa suma de la serie es: " << suma << endl;
    }

    return 0;
}