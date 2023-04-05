#include <iostream>
using namespace std;

class MyClass {
private:
    int num1, num2;

public:
    MyClass() {
        num1 = 0;
        num2 = 0;
    }

    void printNumbers() {
        cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main() {
    MyClass obj1;
    obj1.printNumbers();

    MyClass obj2;
    obj2.printNumbers();

    return 0;
}
