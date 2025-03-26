#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

int main() {
    float temp;
    int opcion;
    
    cout << "CONVERSOR DE TEMPERATURAS\n";
    cout << "1. Celsius a Fahrenheit\n";
    cout << "2. Fahrenheit a Celsius\n";
    cout << "3. Celsius a Kelvin\n";
    cout << "4. Kelvin a Celsius\n";
    cout << "5. Fahrenheit a Kelvin\n";
    cout << "6. Kelvin a Fahrenheit\n";
    cout << "Seleccione una opcion (1-6): ";
    cin >> opcion;
    
    cout << "Ingrese la temperatura: ";
    cin >> temp;
    
    cout << fixed << setprecision(2); // Mostrar 2 decimales
    
    switch(opcion) {
        case 1:
            cout << temp << "°C = " << (temp * 9/5) + 32 << "°F";
            break;
        case 2:
            cout << temp << "°F = " << (temp - 32) * 5/9 << "°C";
            break;
        case 3:
            cout << temp << "°C = " << temp + 273.15 << "K";
            break;
        case 4:
            cout << temp << "K = " << temp - 273.15 << "°C";
            break;
        case 5:
            cout << temp << "°F = " << (temp - 32) * 5/9 + 273.15 << "K";
            break;
        case 6:
            cout << temp << "K = " << (temp - 273.15) * 9/5 + 32 << "°F";
            break;
        default:
            cout << "Opcion no valida!";
    }
    
    return 0;
}