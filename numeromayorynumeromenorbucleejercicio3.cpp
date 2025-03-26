#include <iostream>

using namespace std;

int main() {
    int num,num2,num3,num4,num5;
    
    cout<<"Ingrese un numero: "; cin>>num;
    cout<<"Ingrese otro numero: "; cin>>num2;
    cout<<"Ingrese otro numero: "; cin>>num3;
    cout<<"Ingrese otro numero: "; cin>>num4;
    cout<<"Ingrese otro numero: "; cin>>num5;
    
    for(int i = 0; i == 0; i++) {
        if(num > num2 and num > num3 and num > num4 and num > num5){
            cout<<"El numero mayor es:"<<num;
        }
        else if(num2 > num and num2 > num3 and num2 > num4 and num2 > num5){
            cout<<"El numero mayor es:"<<num2;
        }
        else if(num3 > num and num3 > num2 and num3 > num4 and num3 > num5){
            cout<<"El numero mayor es:"<<num3;
        }
        else if(num4 > num and num4 > num2 and num4 > num3 and num4 > num5){
            cout<<"El numero mayor es:"<<num4;
        }
        else if(num5 > num and num5 > num2 and num5 > num3 and num5 > num4){
            cout<<"El numero mayor es:"<<num5;
        }
        else {
            cout<<"Has introducido mal los numeros";
        }
        
    }
    
    return 0;
}