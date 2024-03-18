#include "Square.h"

Square::Square() {
    width = 0;
}

float Square::get_width() {
    return width;
}

void Square::cal_area(float w) {
    width = w;
    area = width * width;
}