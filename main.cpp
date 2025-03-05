#include <iostream>

int main() {

    std::string cars[] = {"C8 Corvette", "Mustang", "Camry", };

    cars[1] = "Camero";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';


    return 0;
}