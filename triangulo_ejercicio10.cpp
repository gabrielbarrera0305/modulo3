#include <iostream>
using namespace std;

int main() {
    int altura;
    
    cout << "Altura del triangulo: ";
    cin >> altura;
    
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}