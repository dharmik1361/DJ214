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
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p("dharmik", 20);
    p.display();
    return 0;
}
