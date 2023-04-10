#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        // Getter methods
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        // Setter methods
        void setName(string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }
};

int main() {
    Person p;

    // Setting values using setter methods
    p.setName("John");
    p.setAge(30);

    // Getting values using getter methods
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
