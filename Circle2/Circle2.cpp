#include "../Circle/Circle.h"
#include <iostream>
#include <cmath>
#include "Circle2.h"
using namespace std;

#define PI 3.14159265

void Circle2::set_radius(float r) {
    while (r < 0.0f || r > 99.0f) {
        cout << "Radius out of range 0-99, Enter radius again: ";
        cin >> r;
    }
    this->radius = r;
}