#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;
    
    int modulo= num1%num2;
    std::cout <<modulo<< std::endl;
    return 0;
}