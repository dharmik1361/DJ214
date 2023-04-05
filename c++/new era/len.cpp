#include <iostream>
using namespace std;

class Rectangle {
    public:
        double length;
        double breadth;
        double height;

        double calculateArea() {
            return length * breadth * height;
        }
};

int main() {
    Rectangle rect;  

    cout << "Enter the length: ";
    cin >> rect.length;  
    
    cout << "Enter the breadth: ";
    cin >> rect.breadth;  

    cout << "Enter the height: ";
    cin >> rect.height;  

    double area = rect.calculateArea();  

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
