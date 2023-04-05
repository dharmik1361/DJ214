#include <iostream>
using namespace std;

class Dharmik {
public:
    void myFunction() {
        cout << "Hello from myFunction!" << endl;
    }
};

int main() {
    Dharmik obj;

    // Call the function of the class using the object
    obj.myFunction();

    // Call the function of the class using the scope resolution operator
    Dharmik::myFunction(); 

    return 0;
}

// Define the function of the class outside the class using the scope resolution operator
void Dharmik::myFunction() {
    cout << "Hello again from myFunction!" << endl;
}
