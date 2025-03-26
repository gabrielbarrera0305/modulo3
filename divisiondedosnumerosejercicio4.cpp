#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "ingrese un numero mayor al anterior: ";
    std::cin >> num2;
    
    int divi= num1/num2;
    std::cout <<divi<< std::endl;
    return 0;
}