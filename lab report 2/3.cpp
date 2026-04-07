#include<iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    void input();
    int area();
    void display();
};
void Rectangle::input() {
    cout << "Enter length and width: ";
    cin >> length >> width;
}
int Rectangle::area() {
    return length * width;
}
void Rectangle::display() {
    cout<<"Length: "<<length<<", Width: "<<width<<" Area: "<<area() <<endl;
}
Rectangle largerRectangle(Rectangle r1, Rectangle r2) {
    if(r1.area() > r2.area())
        return r1;
    else
        return r2;
}
int main() {
    Rectangle rect1, rect2, maxRect;
    cout << "Rectangle 1";
    rect1.input();
    cout << "Rectangle 2:\n";
    rect2.input();
    maxRect = largerRectangle(rect1, rect2);
    cout<<"Rectangle with larger area:";
    maxRect.display();

    return 0;
}
