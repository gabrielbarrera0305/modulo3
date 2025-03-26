#include <iostream>

int main() {
    int base;
    int altura;
    std::cout << "ingrese la base: ";
    std::cin >> base;
    std::cout << "ingrese la altura: ";
    std::cin >> altura;
    int area= base*altura;
    std::cout <<"el area es igual a: "<< area << std::endl;
    return 0;
}
