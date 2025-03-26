#include <iostream>
#include <vector>
#include <limits> 
#include <iomanip> 

using namespace std;

int main() {
    vector<double> numeros;
    double entrada;
    char continuar;

    cout << "Calculadora de estadisticas basicas\n";
    cout << "----------------------------------\n";

    do {
        cout << "Ingrese un numero: ";
        while(!(cin >> entrada)) {
            cout << "Por favor ingrese un numero valido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        numeros.push_back(entrada);

        cout << "¿Desea ingresar otro numero? (s/n): ";
        cin >> continuar;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while(continuar == 's' || continuar == 'S');

    if(numeros.empty()) {
        cout << "No se ingresaron numeros.\n";
        return 0;
    }

    // Calcular estadísticas
    double minimo = numeros[0];
    double maximo = numeros[0];
    double suma = 0;

    for(double num : numeros) {
        if(num < minimo) minimo = num;
        if(num > maximo) maximo = num;
        suma += num;
    }

    double promedio = suma / numeros.size();

    cout << fixed << setprecision(2); 
    cout << "\nResultados:\n";
    cout << "Cantidad de numeros: " << numeros.size() << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}