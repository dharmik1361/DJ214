#include <iostream>
using namespace std;

class MyClass {
public:
    static int myStaticData;

    static void setStaticData(int data) {
        myStaticData = data;
    }

    static void displayStaticData() {
        cout << "Static data: " << myStaticData << endl;
    }
};


int MyClass::myStaticData = 0;

int main() {
   
    MyClass::setStaticData(42);

    
    MyClass::displayStaticData();

    return 0;
}
