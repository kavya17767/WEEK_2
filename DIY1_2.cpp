#include <iostream>
using namespace std;

// Cube: 1 argument
double volume(double side) {
    return side * side * side;
}

// Cuboid: 3 arguments
double volume(double length, double breadth, double height) {
    return length * breadth * height;
}

// Cylinder: 2 arguments
double volume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}

int main() {
    cout << "Cube volume: " << volume(5) << endl;
    cout << "Cuboid volume: " << volume(2, 3, 4) << endl;
    cout << "Cylinder volume: " << volume(3, 7) << endl;
    return 0;
}
