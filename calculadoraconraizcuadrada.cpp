#include <iostream>
#include <cmath>

using namespace std;

double suma(double num, double num2) {
      double resultado;
      resultado = num + num2;
      return resultado;
 }
 
double resta(double num, double num2) {
      double resultado;
      resultado = num - num2;
      return resultado;
 }

double mult(double num, double num2) {
      double resultado;
      resultado = num * num2;
      return resultado;
 }

double division(double num, double num2) {
      double resultado;
      resultado = num / num2;
      return resultado;
 }
 
double raiz(double num) {
      double resultado;
      resultado = sqrt(num);
      return resultado;
 }

int main() {
    int inicio; 
    cout << "iniciar calculadora 1-si 2-no" << endl;
    cin>>inicio;
    cout<<endl;
    while (inicio == 1) {
    double num, num2, operacion;
   cout<<endl;
   cout << "primer numero: ";
   cin>>num;
   
   cout << "segundo numero: ";
   cin>>num2;
   
   cout<<endl;
   cout << "¿Que operacion desea realizar?" << endl;
   cout << "1-Suma 2-Resta 3-Multiplicacion 4-Division 5-Raiz Cuadrada (Primer numero) 6-salir: ";
   cin>>operacion;
   
   if(operacion == 1){
        cout<<"La suma es: "<<suma(num, num2);
    }
    else if(operacion == 2){
        cout<<"La resta es: "<<resta(num, num2);
    }
    else if(operacion == 3){
        cout<<"La multiplicacion es: "<<mult(num, num2);
    }
    else if(operacion == 4){
        cout<<"La division es: "<<division(num, num2);
    }
    else if(operacion == 5){
        cout<<"La raiz cuadrada de primer numero es: "<<raiz(num);
    }
        else if(operacion == 6){
        cout<<"Gracias por usar esta humilde calculadora";
        break;
    } else {
        cout<<"Opcion invalida";
    }
    }
}