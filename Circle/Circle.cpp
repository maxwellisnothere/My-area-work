#include "../Area/Area.h"
#include "Circle.h"
#include <cmath>

#define PI 3.14159265

void Circle::set_radius(float r) {
  radius = r;
}

float Circle::get_radius() {
  return radius;
}

void Circle::cal_area() {
  area = M_PI * radius * radius;
}

float Circle::get_area() {
  return area; // Return the calculated area
}