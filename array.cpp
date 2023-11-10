#include <iostream>

void printArrayWithBrackets(int arr[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int arraySize;

    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    int* myArray = new int[arraySize];

    std::cout << "Enter the elements of the array, separated by spaces:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> myArray[i];
    }

    printArrayWithBrackets(myArray, arraySize);

    delete[] myArray;

    return 0;
}
