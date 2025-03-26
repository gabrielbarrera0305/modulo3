#include <iostream>
using namespace std;

int main() {
    double base, resultado = 1;
    int exponente;

    cout << "CALCULADORA DE POTENCIA\n";
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (entero): ";
    cin >> exponente;

    bool exponenteNegativo = false;
    if (exponente < 0) {
        exponenteNegativo = true;
        exponente = -exponente;
    }

    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }

    if (exponenteNegativo) {
        resultado = 1 / resultado;
    }

    cout << "\nResultado: " << base;
    if (exponenteNegativo) {
        cout << " ^ (" << -exponente << ")";
    } else {
        cout << " ^ " << exponente;
    }
    cout << " = " << resultado << endl;

    return 0;
}