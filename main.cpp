// This is a simple calculator program that performs basic arithmetic operations.
// The operations include addition, subtraction, multiplication, division, and squaring the first number.
#include<iostream>
using namespace std;
// Function prototypes
int add(int a, int b);//adds two numbers 
int subtract(int a, int b);//subtracts the second number from the first
int multiply(int a, int b);//multiplies two numbers
int divide(int a, int b);//divides the first number by the second
int square(int a);//squares the first number
int main() {
    int num1, num2;// Declare two integers for user input
    char operation;// Declare a character to hold the operation
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
    case '+':
    cout << "Result: " << add(num1, num2) << endl;
    break;
    case '-':
    cout << "Result: " << subtract(num1, num2) << endl;
    break;
    case '*':
    cout << "Result: " << multiply(num1, num2) << endl;
    break;
    case '/':
    cout << "Result: " << divide(num1, num2) << endl;
    break;
    case '^':
    cout << "Result: " << square(num1) << endl;
    break;
    default:
    cout << "Invalid operation!" << endl;
    }
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
int divide(int a, int b) { 
                if (b == 0) { 
                    cout << "Error: Division by zero!" << endl; 
                    return 0; 
                } 
                return a / b; 
            }
            int square(int a) {
    return a * a;
}

            