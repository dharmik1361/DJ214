#include <iostream>

using namespace std;

class MyClass {
    private:
        int num;

        void privateFunction() {
            cout << "This is a private member function." << endl;
        }

    public:
        MyClass(int n) {
            num = n;
        }

        void publicFunction() {
            cout << "This is a public member function." << endl;
            // Accessing the private member function
            privateFunction();
        }
};

int main() {
    MyClass obj(10);
    obj.publicFunction();
    return 0;
}
