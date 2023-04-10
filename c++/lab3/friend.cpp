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

        // Friend function declaration
        friend void displayArea(Rectangle rect);
};

// Friend function definition
void displayArea(Rectangle rect) {
    int area = rect.length * rect.width;
    cout << "Area: " << area << endl;
}

int main() {
    Rectangle rect(5, 7);
    displayArea(rect);  // Calling friend function
    return 0;
}
