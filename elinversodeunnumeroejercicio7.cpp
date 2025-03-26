#include <iostream>

using namespace std;

int main() {
    int num1;
    
    cout<<"Digite un numero: "; cin>>num1;
    
    int decenas = num1 / 10;
    int unidad = num1 % 10;
    int invertir = unidad * 10 + decenas;
    cout<<"El numero es: "<<num1<<endl;
    cout<<"Invertido es: "<<invertir<<endl;
    return 0;
}
