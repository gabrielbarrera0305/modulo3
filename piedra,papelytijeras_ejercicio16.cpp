#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    srand(time(0)); 

    int rondas, puntosUsuario = 0, puntosPC = 0;
    
    cout << "=== PIEDRA, PAPEL O TIJERAS (MEJOR DE N RONDAS) ===\n";
    cout << "¿Cuantas rondas deseas jugar? ";
    cin >> rondas;
    
    for (int ronda = 1; ronda <= rondas; ronda++) {
        int eleccionUsuario, eleccionPC;
        
        cout << "\n--- Ronda " << ronda << " ---\n";
        cout << "1. Piedra\n";
        cout << "2. Papel\n";
        cout << "3. Tijeras\n";
        cout << "Elige (1-3): ";
        cin >> eleccionUsuario;

        if (eleccionUsuario < 1 || eleccionUsuario > 3) {
            cout << "Opcion invalida. Pierdes esta ronda.\n";
            puntosPC++;
            continue;
        }

        eleccionPC = rand() % 3 + 1;

        string opciones[3] = {"Piedra", "Papel", "Tijeras"};
        cout << "\nTu eleccion: " << opciones[eleccionUsuario - 1] << endl;
        cout << "PC elige: " << opciones[eleccionPC - 1] << endl;

        if (eleccionUsuario == eleccionPC) {
            cout << "Empate! Nadie gana puntos.\n";
        } 
        else if ((eleccionUsuario == 1 && eleccionPC == 3) || 
                 (eleccionUsuario == 2 && eleccionPC == 1) || 
                 (eleccionUsuario == 3 && eleccionPC == 2)) {
            cout << "¡Ganaste esta ronda! 🎉 (+1 punto)\n";
            puntosUsuario++;
        } 
        else {
            cout << "¡Perdiste esta ronda! 😢 (+1 punto para PC)\n";
            puntosPC++;
        }
        
        cout << "---\n";
        cout << "Marcador: Tu (" << puntosUsuario << ") - PC (" << puntosPC << ")\n";
    }

    cout << "\n=== RESULTADO FINAL ===\n";
    cout << "Puntos: Tu (" << puntosUsuario << ") - PC (" << puntosPC << ")\n";
    
    if (puntosUsuario > puntosPC) {
        cout << "¡Felicidades, ganaste el juego! 🏆\n";
    } 
    else if (puntosPC > puntosUsuario) {
        cout << "¡La PC gana el juego! 💻\n";
    } 
    else {
        cout << "¡Empate general! 🤝\n";
    }
    
    return 0;
}