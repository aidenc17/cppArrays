#include <iostream>

int searchArray(int array[], int size, int element);

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

    // ********* Array searching

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if (index != -1) {
        std::cout << myNum << " is at index " << index <<'\n';
    }else {
        std::cout << myNum << " is not found.\n";
    }
    return 0;
}

int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
        return -1;
    }
}