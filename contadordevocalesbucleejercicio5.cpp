#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    int contador = 0;
    
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    for(char c : texto) {
        char lowerC = tolower(c);

        if(lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            contador++;
        }
    }

    cout << "\nLa cadena ingresada tiene " << contador << " vocal(es)." << endl;
    
    return 0;
}