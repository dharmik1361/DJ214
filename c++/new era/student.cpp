#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int rollNo;
        int age;
        string address;
        
        void getDetails() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter roll no: ";
            cin >> rollNo;
            cout << "Enter age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter address: ";
            getline(cin, address);
        }
        
        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};

int main() {
    Student s;
    s.getDetails();
    s.displayDetails();
    return 0;
}
