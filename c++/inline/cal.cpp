#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

inline int subtract(int a, int b) {
    return a - b;
}

inline int multiply(int a, int b) {
    return a * b;
}

inline float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
    cout << "substraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
    cout << "multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
    cout << "divison of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;

    return 0;
}
