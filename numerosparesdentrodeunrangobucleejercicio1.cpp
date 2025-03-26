#include <iostream>

using namespace std;

int main() {
    int rango, rango2;
    
    cout<<"ingrese un numero: "; cin>>rango;
    cout<<"ingrese otro numero: "; cin>>rango2;
    
    for(int i = rango; i <= rango2; i++) {
        cout<<i++<<" ";
    }
    
    
    
    return 0;
}
