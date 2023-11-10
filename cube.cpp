#include <iostream>

double calculateCube(double num) {
    return num * num * num;
}

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    double cubeResult = calculateCube(number);

    std::cout << "The cube of " << number << " is: " << cubeResult << std::endl;


}