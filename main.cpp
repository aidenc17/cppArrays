#include <iostream>

int main() {

    std::string cars[] = {"C8 Corvette", "Mustang", "Camry", };

    cars[1] = "Camero";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    //sideof operator

    std::string name = "aiden";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"John", "John", "John", "John"};

    std::cout << sizeof(grade) << '\n';
    std::cout << sizeof(gpa) << '\n';
    std::cout << sizeof(name) << '\n';
    std::cout << sizeof(student) << '\n';
    std::cout << sizeof(grades) << '\n';

    return 0;
}