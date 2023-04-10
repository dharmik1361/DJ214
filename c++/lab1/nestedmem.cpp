#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        int calculateArea() {
            int area = length * width;
            return area;
        }

        void displayAreaWithPerimeter() {
            int perimeter = 2 * (length + width);

            // Nested member function
            void displayArea() 
            {
                int area = calculateArea();
                cout << "Area: " << area << endl;
            }

            displayArea();
            cout << "Perimeter: " << perimeter << endl;
        }
};

int main() {
    Rectangle rect(5, 7);
    rect.displayAreaWithPerimeter();
    return 0;
}
