#include <iostream>
using namespace std;

// Function prototypes for arithmetic operations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);

int main() {
    char choice;
    do {
        int num1, num2;
        int operation;
        
        // Display the menu
        cout << "\nArithmetic Operations Menu\n";
        cout << "press 1 for + \n";
        cout << "press 2 for - \n";
        cout << "press 3 for * \n";
        cout << "press 4 for / \n";
        cout << "press 5 for % \n";
        cout << "press 0 for Quit\n";
        cout << "Enter your choice: ";
        cin >> operation;

        if (operation == 0) {
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        // Input two numbers if not quitting
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Switch case for operations
        switch (operation) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            case 5:
                if (num2 != 0) {
                    cout << "Result: " << modulo(num1, num2) << endl;
                } else {
                    cout << "Error: Modulo by zero is not allowed.\n";
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (true);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return static_cast<float>(a) / b;
}

int modulo(int a, int b) {
    return a % b;
}