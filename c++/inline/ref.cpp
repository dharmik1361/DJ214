#include <iostream>
using namespace std;

int main() {
    int num = 10;  
    int &num2 = num;  

    cout << "Value of num: " << num << endl;  
    cout << "Value of ref: " << num2 << endl;  

    return 0;
}
