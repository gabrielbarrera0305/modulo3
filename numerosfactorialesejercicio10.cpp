#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;
    int suma= num1+num2;
    int producto= suma*suma;
    std::cout <<"suma de los numeros:" << suma << std::endl;
    std::cout <<"el producto:"<< producto << std::endl;
    return 0;
}