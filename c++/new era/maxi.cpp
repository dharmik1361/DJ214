#include <iostream>
using namespace std;

class MaximumFinder {
    public:
        int getMax(int num1, int num2) {
            return (num1 > num2) ? num1 : num2;
        }
};

int main() {
    MaximumFinder mf;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int max = mf.getMax(num1, num2);
    cout << "Maximum value is: " << max << endl;

    return 0;
}
