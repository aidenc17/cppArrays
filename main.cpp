#include <iostream>

int main() {
    //************ Regular arrays
    std::string cars[] = {"C8 Corvette", "Mustang", "Camry", };

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    for (int i = 0; i < 3; i++) {
        std::cout << cars[i] << '\n';
    }

    for (std::string car : cars) {
        std::cout << car << '\n';
    }

    int grades[] = {65, 82, 93, 32};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }

    //********** sideof operator

    // std::string name = "aiden";
    // double gpa = 2.5;
    // char grade = 'A';
    // bool student = true;
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // std::string students[] = {"John", "John", "John", "John"};

    // std::cout << sizeof(grade) << '\n';
    // std::cout << sizeof(gpa) << '\n';
    // std::cout << sizeof(name) << '\n';
    // std::cout << sizeof(student) << '\n';
    // std::cout << sizeof(grades) << '\n';

    return 0;
}