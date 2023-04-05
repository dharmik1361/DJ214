#include <iostream>
using namespace std;

class MyClass {
private:
    int* myData;

public:
    MyClass(int size) {
        myData = new int[size];
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        delete[] myData;
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj(10);
    return 0;
}
