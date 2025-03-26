#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;
    
    string reversa = palabra;
    reverse(reversa.begin(), reversa.end());
    
    if (palabra == reversa) {
        cout << palabra << " es un palindromo!" << endl;
    } else {
        cout << palabra << " no es un palindromo." << endl;
    }
    
    return 0;
}