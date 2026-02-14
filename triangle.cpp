#include <iostream>
using namespace std;

void area(float radius) {
    cout << "Area of Circle = " << 3.14 * radius * radius << endl;
}

void area(float breadth, float height) {
    cout << "Area of Triangle = " << 0.5 * breadth * height << endl;
}

int main() {
    float radius, breadth, height;
    cout << "Enter radius: ";
    cin >> radius;
    area(radius);

    cout << "Enter base and height: ";
    cin >> breadth >> height;
    area(breadth, height);

    return 0;
}
