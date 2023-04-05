#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    const int NUM_EMPLOYEES = 3;
    Employee employees[NUM_EMPLOYEES];

    
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter data for employee " << i+1 << ":" << endl;
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "ID: ";
        cin >> employees[i].id;
        cout << "Salary: ";
        cin >> employees[i].salary;
        cin.ignore(); // ignore the newline character left by cin
    }

    // Display the employee data
    cout << "Employee data:" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Employee " << i+1 << ":" << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "ID: " << employees[i].id << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}
