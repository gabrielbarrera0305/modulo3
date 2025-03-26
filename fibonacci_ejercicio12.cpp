#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    cout << "Cuantos numeros de Fibonacci quieres? ";
    cin >> n;
    
    cout << "Serie de Fibonacci: ";
    fibonacci(n);
    
    return 0;
}