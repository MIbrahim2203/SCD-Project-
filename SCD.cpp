#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}
// Function to subtract two numbers



int main() {
    double num1, num2;
    
    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform operations
    std::cout << "Sum: " << add(num1, num2) << std::endl;
    std::cout << "Difference: " << subtract(num1, num2) << std::endl;
    std::cout << "Product: " << multiply(num1, num2) << std::endl;
    std::cout << "Quotient: " << divide(num1, num2) << std::endl;

    return 0;
}
