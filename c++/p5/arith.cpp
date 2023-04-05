#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2, result;

public:
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        result = num1 + num2;
    }

    void printResult() {
        cout << "The result of " << num1 << " + " << num2 << " = " << result << endl;
    }
};

int main() {
    Calculator obj(10, 20);
    obj.printResult();

    return 0;
}
