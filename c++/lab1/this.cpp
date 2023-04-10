#include <iostream>

using namespace std;

class Calculator {
    private:
        int value1;
        int value2;
        int value3;
        int value4;

    public:
        Calculator(int v1, int v2, int v3, int v4) {
            this->value1 = v1;
            this->value2 = v2;
            this->value3 = v3;
            this->value4 = v4;
        }

        int add() {
            return this->value1 + this->value2 + this->value3 + this->value4;
        }
};

int main() {
    Calculator calc(10, 20, 30, 40);
    int result = calc.add();
    cout << "The sum of values is: " << result << endl;
    return 0;
}
