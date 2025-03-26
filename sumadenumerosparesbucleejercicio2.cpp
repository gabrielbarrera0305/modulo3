#include <iostream>

#include <iostream>

using namespace std;

int main() {
    int cantidad, numero, suma = 0;
    
    cout<<"Digite una serie de numeros que desea sumar: "; 
    cin>>cantidad;
    
    for(int i = 1; i <= cantidad; i++){
        cout<<"Ingrese el valor del numero "<<i<<": ";
        cin>>numero;
        
         if (numero > 0) {
         suma += numero;
    }
    }
    

    cout<<"La suma de los numeros positivos ingresados es: "<<suma;
    
    return 0;
}
