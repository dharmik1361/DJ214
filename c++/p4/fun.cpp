#include <iostream>
using namespace std;

class MyClass1 {
private:
    int myPrivateData;

public:
    MyClass1(int data) {
        myPrivateData = data;
    }

    friend class MyClass2;
};

class MyClass2 {
public:
    void accessPrivateData(MyClass1 obj) {
        cout << "The value of myPrivateData is: " << obj.myPrivateData << endl;
    }
};

int main() {
    MyClass1 obj1(42);
    MyClass2 obj2;

    obj2.accessPrivateData(obj1);

    return 0;
}
