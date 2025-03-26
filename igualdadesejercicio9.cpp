#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;
    bool soniguales =num1==num2;
    std::cout << soniguales << std::endl;
    return 0;
}
