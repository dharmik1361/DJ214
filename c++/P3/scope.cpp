#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

int main() {
    // Local variable
    int localVar = 20;

    // Print the values of the global and local variables using the scope resolution operator
    cout << "Global variable: " << ::globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    return 0;
}
