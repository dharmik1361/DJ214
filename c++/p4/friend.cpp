#include <iostream>
using namespace std;

class MyClass {
private:
    int myPrivateData;

public:
    MyClass(int data) {
        myPrivateData = data;
    }

    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj) {
    cout << "The value of myPrivateData is: " << obj.myPrivateData << endl;
}

int main() {
    MyClass obj(42);
    friendFunction(obj);

    return 0;
}
