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
    
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Person p1("dharmik", 20);
    Person p2("vijay", 20);
    return 0;
}
