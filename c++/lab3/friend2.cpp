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

        // Declare RectangleArea as a friend
        friend class RectangleArea;
};

class RectangleArea {
    public:
        int calculateArea(Rectangle rect) {
            int area = rect.length * rect.width;
            return area;
        }
};

int main() {
    Rectangle rect(5, 7);
    RectangleArea rectArea;

    int area = rectArea.calculateArea(rect);
    cout << "Area: " << area << endl;

    return 0;
}
