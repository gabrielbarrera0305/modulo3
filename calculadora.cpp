#include <iostream>
using namespace std;

int main() {
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        double num1, num2;
        char operador;

        cout << "\nCalculadora Simple\n";
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese la operacion (+, -, *, /): ";
        cin >> operador;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        if (operador == '+') {
            cout << "Resultado: " << num1 + num2 << endl;
        }
        else if (operador == '-') {
            cout << "Resultado: " << num1 - num2 << endl;
        }
        else if (operador == '*') {
            cout << "Resultado: " << num1 * num2 << endl;
        }
        else if (operador == '/') {
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir por cero" << endl;
            }
        }
        else {
            cout << "Operacion no valida" << endl;
        }

        cout << "\n¿Desea hacer otra operacion? (s/n): ";
        cin >> continuar;
    }

    cout << "\nGracias por usar la calculadora!" << endl;
    return 0;
}