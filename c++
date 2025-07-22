### C++
// Simple Calculator in C++

#include <iostream>
using namespace std;

double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
                return 0;
            }
            return num1 / num2;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }
}

int main() {
    cout << calculate(15, 3, '/') << endl;  // Output: 5
    cout << calculate(4, 2, '*') << endl;   // Output: 8
    return 0;
}
