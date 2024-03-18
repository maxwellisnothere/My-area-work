#include <iostream>
#include "Circle/Circle.h"
#include "Square/Square.h"
#include "Area/Area.h"
#include "Circle2/Circle2.h"
using namespace std;

cout << "66019805 Titi Watthanudomsuk";

int main() {
    int N, circleCount = 0, squareCount = 0;
    char choice;

    Circle2 A[10]; // Array of Circle2 objects
    Square B[10];  // Array of Square objects

    cout << "Enter number of shapes (up to 10): ";
    cin >> N;

    // Circle input loop
    for (int i = 0; i < N; i++) {
        cout << "1. Class Circle2\n";
        float radius;
        cout << "Enter Radius Circle " << i + 1 << ": ";
        cin >> radius;

        A[circleCount].set_radius(radius); // Store radius in Circle2 object
        circleCount++;

        cout << "Enter another Circle (y/n)? : ";
        cin >> choice;
        if (choice == 'n') {
            break;
        }
    }

    // Square input loop
    for (int i = 0; i < N; i++) {
        cout << "\n2. Class Square\n";
        float width;
        cout << "Enter Width Square " << i + 1 << ": ";
        cin >> width;

        B[squareCount].cal_area(width); // Calculate and store area in Square object
        squareCount++;

        cout << "Enter another Square (y/n)? : ";
        cin >> choice;
        if (choice == 'n') {
            break;
        }
    }

    // Display results
    cout << "\nNumber of Circle = " << circleCount << endl;
    for (int i = 0; i < circleCount; i++) {
        cout << "Circle " << i + 1 << " Radius = " << A[i].get_radius()
            << " , Area = " << A[i].get_area() << endl; // Using get_area() for Circle2
    }

    cout << "\nNumber of Square = " << squareCount << endl;
    for (int i = 0; i < squareCount; i++) {
        cout << "Square " << i + 1 << " Width = " << B[i].get_width()
            << " , Area = " << B[i].get_area() << endl; // Using get_area() for Square
    }

    return 0;
}