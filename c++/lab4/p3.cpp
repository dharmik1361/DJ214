#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    
public:
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p;
    p.display();
    return 0;
}
