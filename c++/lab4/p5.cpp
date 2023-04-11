#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    
public:
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
    
    Person(const Person& p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called for " << name << endl;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1("dharmik", 20);
    Person p2 = p1;  // Copy constructor is called here
    p2.display();
    return 0;
}
