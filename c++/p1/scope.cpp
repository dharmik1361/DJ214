#include <iostream>
using namespace std;

int x = 10; 

int main() {
    int x = 5; 
    cout << "Local variable x = " << x << endl;
    cout << "Global variable x = " << ::x << endl; 
    return 0;
}
