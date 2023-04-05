#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}
