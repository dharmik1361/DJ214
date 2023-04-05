#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum, avg;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    sum = num1 + num2;
    avg = sum / 2;
    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
    cout << "Average of " << num1 << " and " << num2 << " is " << avg << endl;
    return 0;
}
