#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        int type;

        // Determine the type
        if (a == b && b == c)
            type = 1;  // Equilateral
        else if (a == b || b == c || a == c)
            type = 2;  // Isosceles
        else
            type = 3;  // Scalene

        // Use switch to print the type
        switch (type) {
            case 1:
                cout << "The triangle is Equilateral." << endl;
                break;
            case 2:
                cout << "The triangle is Isosceles." << endl;
                break;
            case 3:
                cout << "The triangle is Scalene." << endl;
                break;
            default:
                cout << "Invalid triangle type." << endl;
        }

    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}



