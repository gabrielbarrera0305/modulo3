#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <limits> 

using namespace std;

int main() {
    srand(time(0));
    
    int numeroSecreto = rand() % 100 + 1;
    int intento;
    int intentosRestantes = 5;
    bool adivinado = false;
    
    cout << "JUEGO DE ADIVINANZA (1-100)\n";
    cout << "Tienes 5 intentos para adivinar el numero secreto.\n\n";
    
    while (intentosRestantes > 0 && !adivinado) {
        cout << "Intento #" << (6 - intentosRestantes) << " - Ingresa tu numero: ";

        while (!(cin >> intento)) {
            cout << "Por favor ingresa un numero valido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        if (intento == numeroSecreto) {
            adivinado = true;
            cout << "\n¡Felicidades! Adivinaste el numero secreto (" << numeroSecreto << ") en " << (6 - intentosRestantes) << " intentos.\n";
        } else {
            intentosRestantes--;
            if (intentosRestantes > 0) {
                if (intento < numeroSecreto) {
                    cout << "El numero secreto es MAYOR. Te quedan " << intentosRestantes << " intentos.\n\n";
                } else {
                    cout << "El numero secreto es MENOR. Te quedan " << intentosRestantes << " intentos.\n\n";
                }
            }
        }
    }
    
    if (!adivinado) {
        cout << "\n¡Agotaste tus intentos! El numero secreto era: " << numeroSecreto << "\n";
    }
    
    return 0;
}