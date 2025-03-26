#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string frase;
    
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    
    int contador = 0;
    istringstream stream(frase);
    string palabra;
    
    while(stream >> palabra) {
        contador++;
    }
    
    cout << "La frase tiene " << contador << " palabras." << endl;
    
    return 0;
}