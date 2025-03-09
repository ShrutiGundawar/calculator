#include <iostream>

enum Operation { EXIT, ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION };

int main() {
    while (true) {
        float num1, num2;
        int choice;
        std::cout << "Input the first number: ";
        std::cin >> num1;
        std::cout << "Input the second number: ";
        std::cin >> num2;
        std::cout <<
            "Choose an operation:\n"
            "   " << ADDITION << " - Addition\n"
            "   " << SUBTRACTION << " - Subtraction\n"
            "   " << MULTIPLICATION << " - Multiplication\n"
            "   " << DIVISION << " - Division\n"
            "   " << EXIT << " - Exit\n"
            "Your choice: ";
        std::cin >> choice;

        if (choice == EXIT) {
            std::cout << "Exiting...\n";
            break;
        }

        float result = 0.0f;
        switch (choice) {
            case ADDITION:
                result = num1 + num2;
                break;
            case SUBTRACTION:
                result = num1 - num2;
                break;
            case MULTIPLICATION:
                result = num1 * num2;
                break;
            case DIVISION:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    std::cout << "Error: Division by zero is not allowed.\n";
                    continue;
                }
                break;
            default:
                std::cout << "Invalid selection. Please try again.\n";
                continue;
        }
        std::cout << "The result is: " << result << "\n";
    }

    return 0;
}
