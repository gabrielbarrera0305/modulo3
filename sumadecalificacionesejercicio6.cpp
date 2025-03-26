#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "ingrese el tercer numero: ";
    std::cin >> num3;
    int suma_de_calificaciones= num1+num2+num3;
    int calificacion = suma_de_calificaciones/3;
    std::cout <<"la suma de calificacion es: " << suma_de_calificaciones << std::endl;
    std::cout <<"calificacion total es: " << calificacion << std::endl;
    return 0;
}