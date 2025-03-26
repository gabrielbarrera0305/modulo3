#include <iostream>
using namespace std;

int main() {
    int inicio, fin;
    
    cout << "Desde: ";
    cin >> inicio;
    cout << "Hasta: ";
    cin >> fin;
    
    cout << "Numeros primos: ";
    for(int n = inicio; n <= fin; n++) {
        if(n < 2) continue;
        
        bool esPrimo = true;
        for(int d = 2; d*d <= n; d++) {
            if(n % d == 0) {
                esPrimo = false;
                break;
            }
        }
        
        if(esPrimo) {
            cout << n << " ";
        }
    }
    
    return 0;
}