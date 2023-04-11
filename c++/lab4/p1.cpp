 #include <iostream>
using namespace std;

class Arithmetic {
    int num1;
    int num2;

public:
    Arithmetic(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    
    int add() {
        return num1 + num2;
    }
    
    int subtract() {
        return num1 - num2;
    }
    
    int multiply() {
        return num1 * num2;
    }
    
    double divide() {
        if (num2 == 0) {
            throw runtime_error("Cannot divide by zero");
        }
        return static_cast<double>(num1) / num2;
    }
};

int main() {
    Arithmetic arith(10, 5);
    cout << "Addition: " << arith.add() << endl;
    cout << "Subtraction: " << arith.subtract() << endl;
    cout << "Multiplication: " << arith.multiply() << endl;
    cout << "Division: " << arith.divide() << endl;
    return 0;
}
